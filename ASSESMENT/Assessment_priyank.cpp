#include<iostream>
#include<string>

using namespace std;

struct Food{
	string name;
	double price;
	string category;
};

class FoodList {
	private:
		Food foods[100];
		Food subFoods[10];
		int count;	
		int listNumber;
		
	public: 
	   FoodList(){
		count =0;
	   } 	
		
		 void addFood(const string& name, double price, const string& category) {
        if (count < 100) {
            foods[count].name = name;
            foods[count].price = price;
            foods[count].category = category;
            count++;
        } else {
            cout << "Food list is full. Cannot add more foods." << endl;
        }
 	   }

		 Food getFoodByIndex(int index) {
        	return subFoods[index];
			}
			
		 int getCount() {
     	   return listNumber;
    	}
		    
 	   	void printFoodsByCategory(const string& category) {
 	   		listNumber = 0;
        	cout << "Foods in category " << category << ":" << endl;
        	for (int i = 0; i < count; ++i) {
        		if (foods[i].category == category) {
        			subFoods[listNumber] = foods[i];
               	 cout << listNumber+1<<") " << foods[i].name << " (Rs." << foods[i].price << ")" << endl;
               	 listNumber++;
           	 }
        	}
    	}
};


struct Order{
	string itemName;
	int quentity;
	double totalPrice;
};



int main(){
	string userName;
	int choise,quentity,selectedFoodIndex;
	int maxSelection = 20;
	Order Orders[maxSelection];
	int selectionCount = 0;
	double totalBill;
	char orderMore;
	
	FoodList foodList;

	// adding pizzas	
	foodList.addFood("Margherita Pizza", 400, "Pizzas");
	foodList.addFood("Pepperoni Pizza", 500, "Pizzas");
	foodList.addFood("BBQ Chicken Pizza", 650, "Pizzas");
	foodList.addFood("Veggie Supreme Pizza", 550, "Pizzas");
	foodList.addFood("Cheese Burst Pizza", 700, "Pizzas");
	
	// adding burgers
	foodList.addFood("Classic Cheeseburger", 250, "Burgers");
	foodList.addFood("Chicken Burger", 320, "Burgers");
	foodList.addFood("Veggie Burger", 300, "Burgers");
	foodList.addFood("BBQ Bacon Burger", 420, "Burgers");

	// adding Sandwitch
	foodList.addFood("Classic Club Sandwich", 300, "Sandwitch");
	foodList.addFood("Grilled Cheese Sandwich", 300, "Sandwitch");
	foodList.addFood("Egg Salad Sandwich", 350, "Sandwitch");

	// adding Rolls
	foodList.addFood("Chicken Tikka Roll", 220, "Rolls");
	foodList.addFood("Paneer Tikka Roll", 250, "Rolls");
	foodList.addFood("Veg Frankie Roll", 200, "Rolls");
	foodList.addFood("Egg Roll", 200, "Rolls");
	
	// adding Biryani
	foodList.addFood("Chicken Biryani", 500, "Biryani");
	foodList.addFood("Vegetable Biryani", 380, "Biryani");
	foodList.addFood("Egg Biryani", 400, "Biryani");
	foodList.addFood("Hyderabadi Biryani", 550, "Biryani");

		
	cout << "Please Enter Your Name : ";
	cin >> userName;
	cout<< "  Hello "<<userName<<"\n\n";
	
	do{
		orderMore = 'N';
	
	cout<<"  What Would You Like To Order ? \n\n";
	cout<<"\t\t\t ************ Menu ************ \n";
	cout<<"  1) Pizzas \n  2) Burgers \n  3) Sandwitch \n  4) Rolls \n  5) Biryani \n\n";
	cout<<"  Please Enter Your Choise : ";
	cin>> choise;
	cout<<"\n\n";


	switch (choise){
		case 1:
			foodList.printFoodsByCategory("Pizzas");
			break;
		case 2:
			foodList.printFoodsByCategory("Burgers");
			break;
		case 3:
			foodList.printFoodsByCategory("Sandwitch");
			break;
		case 4:
			foodList.printFoodsByCategory("Rolls");
			break;
		case 5:
			foodList.printFoodsByCategory("Biryani");
			break;
		default: 
			cout<<"Please select Listed Foods Only ";
	}

	
	cout << "\n  Please select a food item by entering its number: ";
    cin >> selectedFoodIndex;
    cout<<"  Please Enter Quentity : ";
    cin>> quentity;
    

    // Check if selectedFoodIndex is within the valid range 
    if (selectedFoodIndex >= 1 && selectedFoodIndex <= foodList.getCount() ){
    	totalBill = 0;
    	if(selectionCount>maxSelection){
    		cout<<"max number of selecting food in one order is 20";
		}

    		Food selectedFood = foodList.getFoodByIndex(selectedFoodIndex - 1);	
    	
    	Orders[selectionCount].itemName = selectedFood.name;        
    	Orders[selectionCount].quentity = quentity;
        Orders[selectionCount].totalPrice = (quentity*selectedFood.price);
    	
		cout<<"\n\n\t\t\t ************ Your Order ************ \n";
		for(int i=0;i<=selectionCount;i++){
			int orderQty = Orders[i].quentity;
			string orderedItemName = Orders[i].itemName;
			double orderPrice = Orders[i].totalPrice;
			cout<<"  "<< orderQty<<"  "<< orderedItemName<<"  "<< orderPrice<< endl;
			totalBill = totalBill+Orders[i].totalPrice;
		}
		
        cout<<"  Your Total Bill is : "<< totalBill<<"\n";
        cout<<"  Your Order Will be Delivered in 40 Minutes \n";
        cout<<"  Thank you for Ordering from Tops Tech Fast Food \n";
        cout<<"  Would You like to Order anything else ? Y/N : ";
        cin>>orderMore;
        selectionCount++;
        
    } else {
        cout << "Invalid selection." << endl;
    }
	}while(orderMore == 'y' || orderMore == 'Y');
}












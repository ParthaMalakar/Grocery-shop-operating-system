#include<iostream>
#include<string>
#include<vector>
#define MAXCATSTO 30
using namespace std;
typedef struct shopAttribute{
    string itemID;
    double itemPrice, itemQuantity;
} inventoryAttribute;
void insertItem(){
    cout << "ENTER THE ATTRIBUTE OF THE ITEM NO. "<<endl;

}
void DisplayAllItem(vector<inventoryAttribute>mallAttribute){
    for(int inc = 0; inc < 2; ++inc){
        cout << "THE ATTRIBUTE OF THE ITEM NO. " << inc + 1 << ": "<<endl;
        cout << "Product ID: "<< mallAttribute[inc].itemID << endl;
        cout << "Price: "<< mallAttribute[inc].itemPrice << endl;
        cout << "Quantity: "<< mallAttribute[inc].itemQuantity << endl;
}
}
void DisplayOneItem(vector<inventoryAttribute>mallAttribute, string itemID){
    for(int inc = 0; inc < MAXCATSTO; ++inc){
        if(itemID == mallAttribute[inc].itemID){
            cout << "THE ATTRIBUTE OF THE ITEM NO. " << inc + 1 << ": ";
            cout << "Product ID: "<< mallAttribute[inc].itemID << endl;
            cout << "Price: "<< mallAttribute[inc].itemPrice << endl;
            cout << "Quantity: "<< mallAttribute[inc].itemQuantity << endl;
            break;
        }
    }
}
int main(void){
    inventoryAttribute shopAttribute;
    vector<inventoryAttribute>mallAttribute;
    cout<<"********Select appropriate option****"<<endl;
    cout<<"1. Insert item   "<<endl;
    cout<<"2. Display all items   "<<endl;
    cout<<"3. Display specific item  "<<endl;
    cout<<"4. Exit  "<<endl;
    int coic;
    do{
        cout << "ENTER YOUR CHOICE: ";
        cin >> coic;
        if(coic == 1){
            for(int inc = 0; inc < MAXCATSTO; ++inc){
                insertItem();
                cout << inc + 1 << ": ";
                cin >> shopAttribute.itemID;
                cout<<"ENTER THE PRODUCT PRICE: "<<endl;
                 cin>> shopAttribute.itemPrice;
                 cout<<"ENTER ITEM QUANTITY: "<<endl;
                cin>> shopAttribute.itemQuantity;
                mallAttribute.push_back(shopAttribute);
                break;
            }
        }
        else if(coic == 2){
            DisplayAllItem(mallAttribute);

        }
        else if(coic == 3){
            string itemID;
            cout << "ENTER THE ATTRIBUTE THE ITEM ID: ";
            cin >> itemID;
            DisplayOneItem(mallAttribute, itemID);
        }
        else if(coic >4){
            cout<<"Wrong number type" <<endl;
        }
        }
    while(coic != 4);
    {
       cout<<" Thank you for using our Grocery shop operating  system";
    }

    return 0;
}

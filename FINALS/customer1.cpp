#include <iostream>
#include <vector>
using namespace std;

void buy (string category[], vector<string> t, vector<string> b, vector<string> a, 
 vector<float> pr1, vector<float> pr2, vector<float> pr3, 
 vector<int> st1,vector<int> st2,vector<int> st3,
 vector<float> pr4, vector<float> pr5, vector<float> pr6, 
 vector<int> st4,vector<int> st5,vector<int> st6,
 vector<float> pr7, vector<float> pr8, vector<float> pr9, 
 vector<int> st7,vector<int> st8,vector<int> st9, double subTotal, double total) {

    string choice;
    cout << "\nAVAILABLE ITEMS: \n";
        cout << endl;
    
        for (int i = 0; i < 3; i++) {
            cout << "[" << i + 1 << "]" << " " << category[i] << endl;
        }
    cout << endl;

    while (true) {
    cout << "Enter your choice: ";
    cin >> choice;

    cout << endl;

    if (choice == "1" ) { //tops
        int choice1;
            for (int j = 0; j < t.size(); j++) {
            cout << j + 1 << ". " << t[j] << endl;
        }
        cout << endl;
        // if (choice1 == 1) {
            
        // }
        cout << "Enter: ";
        cin >> choice1;
        
        for(int i = 0; i < t.size(); i++){
            if((choice1 - 1) == i){
                cout<<"\nWhat size: \n\n1.Small\n2.Medium\n3.Large";
                cout<<"\n\nInput: "; 
                int size1;
                cin >> size1;

                int quantity;
                cout << "\nEnter Quantity: ";
                cin >> quantity;
                

                if (size1 == 1) { //for small
                    subTotal = (pr1[size1 -1] * quantity);
                    (st1[size1 -1] - quantity); 
                    total += subTotal;
                    cout << t[choice1 -1] << " | " << "Small" << " | " << "Quantity: "<< quantity << " |" << " Price: " << subTotal <<endl;                    
                } 
                if (size1 == 2) {
                    subTotal = (pr2[size1 -1] * quantity);
                    (st2[size1 -1] - quantity);   
                    total += subTotal;
                    cout << t[choice1 -1] << " | " << "Medium" << " | " << "Quantity: "<< quantity << " |" << " Price: " << subTotal <<endl; 
                }
                if (size1 == 3) {
                   subTotal = (pr3[size1 -1] * quantity);       
                   (st3[size1 -1] - quantity);       
                   total += subTotal;
                   cout << t[choice1 -1] << " | " << "Large" << " | " << "Quantity: " << quantity << " |" << " Price: " << subTotal <<endl;                    
                }

        
            }
            
        }


    } else if (choice == "2") { // bottoms
        int choice2;
            for (int j = 0; j < b.size(); j++) {
            cout << j + 1 << ". " << b[j] << endl;
        } 
        cout << endl;
        
        cout << "Enter: ";
        cin >> choice2;
        
        for(int i = 0; i < t.size(); i++){
            if((choice2 - 1) == i){
                cout<<"\nWhat size: \n\n1.Small\n2.Medium\n3.Large";
                cout<<"\n\nInput: "; 
                int size2;
                cin >> size2;

                int quantity;
                cout << "\nEnter Quantity: ";
                cin >> quantity;
                

                if (size2 == 1) { //for small
                    subTotal = (pr4[size2 -1] * quantity);
                    (st4[size2 -1] - quantity); 
                    total += subTotal;
                    cout << t[choice2 -1] << " | " << "Small" << " | " << "Quantity: "<< quantity << " |" << " Price: " << subTotal <<endl;
                } 
                if (size2 == 2) {
                    subTotal = (pr5[size2 -1] * quantity);
                    (st5[size2 -1] - quantity); 
                    total += subTotal;
                    cout << t[choice2 -1] << " | " << "Medium" << " | " << "Quantity: "<< quantity << " |" << " Price: " << subTotal <<endl;                   
                }
                if (size2 == 3) {
                    subTotal = (pr6[size2 -1] * quantity);
                    (st6[size2 -1] - quantity); 
                    total += subTotal;
                    cout << t[choice2 -1] << " | " << "Large" << " | " << "Quantity: "<< quantity << " |" << " Price: " << subTotal <<endl;                   
                }
            }
            }
            
        
        

    } else if (choice == "3") {
        int choice3;
            for (int j = 0; j < a.size(); j++) {
            cout << j + 1 <<  ". " << a[j] << endl;
        }
        cout << endl;

        cout << "Enter: ";
        cin >> choice3;
        
        for(int i = 0; i < t.size(); i++){
            if((choice3 - 1) == i){
                cout<<"\nWhat size: \n\n1.Small\n2.Medium\n3.Large";
                cout<<"\n\nInput: "; 
                int size3;
                cin >> size3;

                int quantity;
                cout << "\nEnter Quantity: ";
                cin >> quantity;
                

                if (size3 == 1) { //for small
                    subTotal = (pr7[size3 -1] * quantity);
                    (st7[size3 -1] - quantity); 
                    total += subTotal;
                    cout << t[choice3 -1] << " | " << "Small" << " | " << "Quantity: "<< quantity << " |" << " Price: " << subTotal <<endl;
                } 
                if (size3 == 2) {
                    subTotal = (pr8[size3 -1] * quantity);
                    (st8[size3 -1] - quantity); 
                    total += subTotal;
                    cout << t[choice3 -1] << " | " << "Medium" << " | " << "Quantity: "<< quantity << " |" << " Price: " << subTotal <<endl;                   
                }
                if (size3 == 3) {
                    subTotal = (pr9[size3 -1] * quantity);
                    (st9[size3 -1] - quantity); 
                    total += subTotal;
                    cout << t[choice3 -1] << " | " << "Large" << " | " << "Quantity: "<< quantity << " |" << " Price: " << subTotal <<endl; 
                    cout << total <<endl;                   
                }
            }
        }
    } else {
        cout << "\nInvalid po \n";
    }

    
}
}



void order () {
    


}
void cashier () {
    
}



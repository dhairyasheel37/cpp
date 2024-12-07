#include<iostream>
#include<string>
using namespace std;

int isvalid_name(string name) {
    for (int i = 0; name[i] != '\0'; i++) {
        if (!((name[i] >= 65 && name[i] <= 90) || (name[i] >= 97 && name[i] <= 122) || name[i] == ' ')) 
        {
            return 0; // Invalid character found
        }
    }
    return 1; // All characters are valid
}


    

void  personDetails()
{
    int r;
    string name , Address,phno;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter the address: ";
    cin>>Address;
    cout<<"Enter your phone number: ";
    cin>>phno;
    
    r = isvalid_name(name);
    if (r == 1)
    {
        cout<<"Name is valid"<<endl;
    }
    else
    {
        cout<<"Invalid"<<endl;
    }
}

int main(){
    
    int choice;

    cout << "Choose an option:\n";
    cout << "1. Person Details\n";
    cout << "2. Student Details\n";
    cout << "3. Employee Details\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore(); // Ignore leftover newline character

    switch (choice) {
        case 1:
            personDetails();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}
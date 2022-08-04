#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    // Q = quantitiy
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken_roll = 0;
    // S = sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken_roll = 0;
    // Total price of item
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken_roll = 0;

    cout << " \n\t\t\t -----Items in stock----- "<<endl;
    cout << " \n Rooms available: ";
    cin >> Qrooms;
    cout << " \n Quantity of pasta :";
    cin >> Qpasta;
    cout << " \n Quantity of burger :";
    cin >> Qburger;
    cout << " \n Quantity of noodles :";
    cin >> Qnoodles;
    cout << " \n Quantity of shake :";
    cin >> Qshake;
    cout << " \n Quantity of chicken_roll :";
    cin >> Qchicken_roll;
     cout << "\n\t\t\t---------------------x---------------------\n\t\t\t"<<endl;
    

    m:
    // this is menu and we levelled it as m
    cout << "\n\t\t\t ----Please select from the menu options----";
    cout << "\n 1) Rooms";
    cout << "\n 2) Pasta";
    cout << "\n 3) Burger";
    cout << "\n 4) Noodles";
    cout << "\n 5) Shake";
    cout << "\n 6) Chicken-roll";
    cout << "\n 7) Information regarding sales ans collection";
    cout << "\n 8) Exit";
    cout << "\n\n Please enter your choice! ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the number of rooms you want: ";
        cin >>quant;
        // total rooms - sold rooms=remaining rooms
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            //Total_rooms = money from rooms 
            Total_rooms= Total_rooms+(quant*1200);
            cout << "\n\n\t\t" << quant << " rooom/rooms have been alloted to you!";
        }
        else
        
            cout << "\n\t Only " << Qrooms - Srooms << " rooms remainig in hotel.";
            break;
        

    case 2:
        cout << "\n\n Plates of pasta to order: ";
        cin >>quant;
        // total pasta - sold pasta=remaining pasta
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            Total_pasta= Total_pasta+(quant*250);
            cout << "\n\n\t\t" << quant << " plates of pasta ordered!";
        }
        else
        
            cout << "\n\t Only " << Qpasta-Spasta << " plates of pasta in stock.";
            break;
        

    case 3:
        cout << "\n\n Burgers to order: ";
        cin >> quant;
        // total burger - sold burger=remaining burger
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            Total_burger= Total_burger+(quant*150);
            cout << "\n\n\t\t" << quant << " burger ordered!";
        }
        else
        
            cout << "\n\t Only " << Qburger-Sburger << " burger in stock.";
            break;
        

    case 4:
        cout << "\n\n Plates of noodles to order: ";
        cin >> quant;
        // total noodles - sold noodles=remaining noodles
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            Total_noodles= Total_noodles+(quant*100);
            cout << "\n\n\t\t" << quant << " plates of noodles ordered!";
        }
        else
        
            cout << "\n\t Only " << Qnoodles-Snoodles << " plates of noodles in stock.";
            break;
        

    case 5:
        cout << "\n\n Enter the number of shake you want: ";
        cin >> quant;
        // total shake - sold shake=remaining shake
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            Total_shake=Total_shake+(quant*70);
            cout << "\n\n\t\t" << quant << " shakes ordered!";
        }
        else
       
            cout << "\n\t Only " << Qshake - Sshake << " shake in stock";
            break;
        

    case 6:
        cout << "\n\n Enter the number of chicken_roll you want: ";
        cin >> quant;
        // total chicken - sold chicken=remainingchickens
        if (Qchicken_roll - Schicken_roll >= quant)
        {
            Schicken_roll = Schicken_roll + quant;
            Total_chicken_roll= Total_chicken_roll+(quant*300);
            cout << "\n\n\t\t" << quant << " chicken_roll ordered!";
        }
        else
        
            cout << "\n\t Only " << Qchicken_roll - Schicken_roll << " chicken_roll in stock.";
            break;
       
        


        case 7:
        cout<<"\n\t ------Details of the sales and collection------"<<endl;
        cout<<"\n\t Number of room we had : "<<Qrooms;
        cout<<"\n\t Number of room we gave for rent :"<<Srooms;
        cout<<"\n\t Remaining rooms : "<<Qrooms-Srooms;
        cout<<"\n\t Total rooms collection of the day : "<<Total_rooms<<endl;

        cout<<"\n\t Number of pasta we had : "<<Qpasta;
        cout<<"\n\t Plates of pasta we sold : "<<Spasta;
        cout<<"\n\t Remaining  plates of pasta : "<<Qpasta-Spasta;
        cout<<"\n\t Total pasta collection of the day : "<<Total_pasta<<endl;
        

        cout<<"\n\t Number of burger we had : "<<Qburger;
        cout<<"\n\t Number of burger we sold : "<<Sburger;
        cout<<"\n\t Remaining burger  : "<<Qburger-Sburger;
        cout<<"\n\t Total burger  collection of the day : "<<Total_burger<<endl;


        cout<<"\n\t Number of noodles we had : "<<Qnoodles;
        cout<<"\n\t Number of noodles we sold : "<<Snoodles;
        cout<<"\n\t Remaining noodles  : "<<Qnoodles-Snoodles;
        cout<<"\n\t Total noodles  collection of the day : "<<Total_noodles<<endl;


        cout<<"\n\t Number of shake we had : "<<Qshake;
        cout<<"\n\t Number of shake we sold : "<<Sshake;
        cout<<"\n\t Remaining shake  : "<<Qshake-Sshake;
        cout<<"\n\t Total shake  collection of the day : "<<Total_shake<<endl;


        cout<<"\n\t Number of chicken_roll we had : "<<Qchicken_roll;
        cout<<"\n\t Number of chicken_roll we sold : "<<Schicken_roll;
        cout<<"\n\t Remaining chicken_roll  : "<<Qchicken_roll-Schicken_roll;
        cout<<"\n\t Total chicken_roll  collection of the day : "<<Total_chicken_roll<<endl<<endl;


        cout<<"\n\t Total collection of the day : "<<Total_chicken_roll+Total_shake+Total_noodles+Total_burger+Total_pasta+Total_rooms<<endl<<endl;




        
        break;


        case 8:
        // exit in 0 milisceond
            exit(0);
            // another number mentioned apart from the  menu options will print this
            default:
            cout<<"\n\t Please select the number mentioned above !";


    } 
    // this is jump statement this is go to or jump to m once loop breaks.  
    goto m; 

        return 0;
    }
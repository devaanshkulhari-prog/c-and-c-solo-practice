#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    //1.CONSTANTS
    const float tax = 0.05f;//5%GST
    const float price_rice = 60.000;
    const float price_flour=45.000;
    const float price_wheat=50.000;

    int quantity_rice , quantity_flour , quantity_wheat;
    int payment_choice;

    cout<<"================================="<<endl;
    cout<<" SMART GROCERY BILLING PLSS TRUST"<<endl;
    cout<<"================================="<<endl;

    //2.INPUT QUANTITIES
    cout<<"the quantity of rice is:";
    cin>>quantity_rice;
    cout<<"the quantity of flour is:";
    cin>>quantity_flour;
    cout<<"the quantity of wheat is:";
    cin>>quantity_wheat;

    //3.SUBTOTAL CALCULATION
    float total_rice = quantity_rice*price_rice;
    float total_flour = quantity_flour*price_flour;
    float total_wheat = quantity_wheat*price_wheat;
    float subtotal=total_rice+total_flour+total_wheat;

    //4.DECISION MAKING : DISCOUNT LOGIC
    float discount = 0.0f;
    if (subtotal >= 1000.0f) {
        discount = subtotal * 0.15f; // 15% off for orders >= Rs. 1000
        cout << "\n>> CONGRATS! You unlocked 15% Mega Discount!" << endl;
    } else if (subtotal >= 500.0f) {
        discount = subtotal * 0.10f; // 10% off for orders >= Rs. 500
        cout << "\n>> CONGRATS! You unlocked 10% Standard Discount!" << endl;
    } else {
        cout << "\n>> Add items worth Rs. " << (500.0f - subtotal) << " more to get 10% OFF!" << endl;
    }

    float taxable_amount = subtotal - discount;
    float tax_amount = taxable_amount * tax;
    float grand_total = taxable_amount + tax_amount;

    //5.DECISION MAKING : PAYMENT METHOD
    cout<<"select payment method"<<endl;
    cout<<"1.UPI"<<endl;
    cout<<"2.NET BANKING"<<endl;
    cout<<"3.CASH"<<endl;
    cout<<"4.DEBIT CARD"<<endl;
    cin>>payment_choice;

    string payment_method;
    switch (payment_choice) {
        case 1:
            payment_method = "UPI / QR";
            break;
        case 2:
            payment_method = "Card Payment";
            break;
        case 3:
            payment_method = "Cash";
            break;
        default:
            payment_method = "Pending / Cash";
            break;
    }

    //6.FORMATTED INVOICE OUTPUT
    cout<<"============";
    cout<<" TAX INVOICE";
    cout<<"============";

    cout<<left<<setw(15)<<"item"<<right<<setw(15)<<"quantity"<<setw(15)<<"price"<<setw(15)<<"total"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<left<<setw(15)<<"rice"<<right<<setw(15)<<"quantity_rice"<<setw(15)<<"price_rice"<<setw(15)<<"total_rice"<<endl;
    cout<<left<<setw(15)<<"flour"<<right<<setw(15)<<"quantity_flour"<<setw(15)<<"price_flour"<<setw(15)<<"total_flour"<<endl;
    cout<<left<<setw(15)<<"wheat"<<right<<setw(15)<<"quantity_wheat"<<setw(15)<<"price_wheat"<<setw(15)<<"total_wheat"<<endl;
    cout<<"------------------------------"<<endl;

    cout<<left<<setw(15)<<"subtotal"<<right<<setw(15)<<subtotal<<endl;
    if (discount > 0) {
        cout<<left<<setw(15)<<"Discount savings"<<right<<setw(15)<<"-"<<discount<<endl;
    }
    cout<<left<<setw(15)<<"GST 5%"<<right<<setw(15)<<tax<<endl;
    cout<<"=============================="<<endl;
    cout<<left<<setw(15)<<"GRAND TOTAL"<<right<<setw(15)<<grand_total<<endl;
    cout<<left<<setw(15)<<"PAYMENT METHOD"<<right<<setw(15)<<payment_method<<endl;
    
    return 0;
}





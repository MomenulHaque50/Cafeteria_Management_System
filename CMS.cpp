#include<bits/stdc++.h>

using namespace std;


class CafeteriaClass {
     protected:
       int totalcost;
  public:
     int menup[7]={30,10,10,25,15,20};
     int setmenup[4]={130,150,210};
     char m1[6][20] = { "Burger", "Singara", "Puri",
                           "Vegetable Roll","Coffee","Coke" };
    char m2[3][20] = { "Set Menu1", "Set Menu2", "Set Menu3" };
     int order[30];
     int menuflag[30];
     int orderno[30];
     int unitcost[30];
    int option();
    int menu();

    int setmenu();
    CafeteriaClass();
};
CafeteriaClass::CafeteriaClass() {
 totalcost=0;
}

// derived class
class bill : public CafeteriaClass {

   public:
       int l=0;
    void amount(int j) {
        int len=j;

        for(int i=0;i<len;i++)
        {
            cout<<len<<endl;
            if(menuflag[i]==1)
            {   l=orderno[i];
            l=l-1;
            unitcost[i]=0;
                unitcost[i]+= order[i]*menup[l];
                cout<<unitcost[i]<<endl;
            }
            if(menuflag[i]==2)
            {   l=orderno[i];
             l=l-1;
             unitcost[i]=0;
                unitcost[i]+= order[i]*setmenup[l];
                cout<<unitcost[i]<<endl;
            }
        }


    }
    void printbill(int j) {
  cout << "------------------------------------------------------"<<endl;
  cout << "------------------------Bill--------------------------"<<endl;
  cout << "------------------------------------------------------"<<endl;
  cout << "Item Name        Unit Price      Quantity     Total Price"<<endl;
 int len = j;

        for(int i=0;i<len;i++)
        {
            if(menuflag[i]==1)
            {   l=orderno[i];
            l=l-1;
 cout << m1[l]<<"-----------"<<menup[l]<<"---------"<<order[i]<<"----------"<<unitcost[i]<<endl;
  cout << "--------------------------------------------------------------------"<<endl;
            }
            if(menuflag[i]==2)
            {    l=orderno[i];
            l=l-1;
 cout << m2[l]<<"----------"<<setmenup[l]<<"---------"<<order[i]<<"----------"<<unitcost[i]<<endl;
  cout << "-------------------------------------------------------------------------"<<endl;
            }
        }


     for(int i=0;i<len;i++)
        {
            totalcost+=unitcost[i];
        }
         cout << "Total Amount:"<<totalcost<<endl;
        cout << "-------------------------------------------------------------------------"<<endl;
        cout << "-------------------------------------------------------------------------"<<endl;
        cout<<endl;
    }
};
int CafeteriaClass::option() {
  int p;
  cout << "------------------------------------------------------"<<endl;
  cout << "------------Cafeteria Management System---------------"<<endl;
  cout << "------------------------------------------------------"<<endl;
  cout << "            1. Menu."<<endl;
  cout << "            2. Set Menu."<<endl;
  cout << "            3. Bill."<<endl;
  cout << "            4. Exit."<<endl;
  cout << "------------------------------------------------------"<<endl;
  cout << "Choose your option?"<<endl;
  cin>>p;
  return p;


}
int CafeteriaClass::menu() {
    int p;
  cout << "------------------------------------------------------"<<endl;
  cout << "-----------------------Menu---------------------------"<<endl;
  cout << "------------------------------------------------------"<<endl;
  cout << "            1. Burger-------------------------30 BDT"<<endl;
  cout << "            2. Singara------------------------10 BDT"<<endl;
  cout << "            3. Puri---------------------------10 BDT"<<endl;
  cout << "            4. Vegetable Roll-----------------25 BDT"<<endl;
  cout << "            5. Coffee-------------------------15 BDT"<<endl;
  cout << "            6. Coke---------------------------20 BDT"<<endl;
  cout << "            7. Back"<<endl;
  cout << "------------------------------------------------------"<<endl;
  cout << "Choose your option?"<<endl;
  cin>>p;
  return p;

}

int CafeteriaClass::setmenu() {
     int p;
  cout << "------------------------------------------------------"<<endl;
  cout << "---------------------Set Menu-------------------------"<<endl;
  cout << "------------------------------------------------------"<<endl;
  cout << "            1. Kichuri+ Egg Fry + Drinks-----130 BDT"<<endl;
  cout << "            2. Teheri+ Meat+ Drinks----------150 BDT"<<endl;
  cout << "            3. Fried Rice+ Chicken Fry+ Coke-210 BDT"<<endl;
  cout << "            4. Back"<<endl;
  cout << "------------------------------------------------------"<<endl;
 cout << "Choose your option?"<<endl;
  cin>>p;
  return p;
}
int main()
{
    int k,v,a;
   bill myObj;
   int i=0;
   while(1){
   k=myObj.option();
   if(k==1)
   {
       v=myObj.menu();
      if(v==1)
      {
          cout<<"How many do you needed?"<<endl;
          cin>>a;
          cout<<"Oder Successfully Placed! Thank you!"<<endl;
          myObj.order[i]=a;
          myObj.menuflag[i]=1;
          myObj.orderno[i]=1;
          i++;

      }
      else if(v==2)
      {
          cout<<"How many do you needed?"<<endl;
          cin>>a;
          cout<<"Oder Successfully Placed! Thank you!"<<endl;
          myObj.order[i]=a;
          myObj.menuflag[i]=1;
          myObj.orderno[i]=2;
          i++;

      }
      else if(v==3)
      {
          cout<<"How many do you needed?"<<endl;
          cin>>a;
          cout<<"Oder Successfully Placed! Thank you!"<<endl;
          myObj.order[i]=a;
          myObj.menuflag[i]=1;
          myObj.orderno[i]=3;
          i++;

      }
      else if(v==4)
      {
          cout<<"How many do you needed?"<<endl;
          cin>>a;
          cout<<"Oder Successfully Placed! Thank you!"<<endl;
          myObj.order[i]=a;
          myObj.menuflag[i]=1;
          myObj.orderno[i]=4;
          i++;

      }
      else if(v==5)
      {
          cout<<"How many do you needed?"<<endl;
          cin>>a;
          cout<<"Oder Successfully Placed! Thank you!"<<endl;
          myObj.order[i]=a;
          myObj.menuflag[i]=1;
          myObj.orderno[i]=5;
          i++;

      }
      else if(v==6)
      {
          cout<<"How many do you needed?"<<endl;
          cin>>a;
          cout<<"Oder Successfully Placed! Thank you!"<<endl;
          myObj.order[i]=a;
          myObj.menuflag[i]=1;
          myObj.orderno[i]=6;
          i++;

      }
      else if (v==7){
              continue;
      }
      else{
        cout<<"Invalid Input"<<endl;

      }
   }
  else if(k==2)
   {
       v=myObj.setmenu();
      if(v==1)
      {
          cout<<"How many do you needed?"<<endl;
          cin>>a;
          cout<<"Oder Successfully Placed! Thank you!"<<endl;
          myObj.order[i]=a;
          myObj.menuflag[i]=2;
          myObj.orderno[i]=1;
          i++;

      }
      else if(v==2)
      {
          cout<<"How many do you needed?"<<endl;
          cin>>a;
          cout<<"Oder Successfully Placed! Thank you!"<<endl;
          myObj.order[i]=a;
          myObj.menuflag[i]=2;
          myObj.orderno[i]=2;
          i++;

      }
      else if(v==3)
      {
          cout<<"How many do you needed?"<<endl;
          cin>>a;
          cout<<"Oder Successfully Placed! Thank you!"<<endl;
          myObj.order[i]=a;
          myObj.menuflag[i]=2;
          myObj.orderno[i]=3;
          i++;

      }

      else if (v==4){
            continue;
      }
      else{
        cout<<"Invalid Input"<<endl;

      }
   }
   else if(k==3)
   {
      myObj.amount(i);
       myObj.printbill(i);


   }
  else if(k==4)
  {
      return 0;
  }
  else {

    cout<<"Invalid Input"<<endl;
  }
   }
  return 0;


}



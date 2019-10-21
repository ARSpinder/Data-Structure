#include<iostream>
using namespace std;

class AllProgram
{
 public:

   int size[100];
   int i,j,num;
   int key;
   int s=0; //flag
   int temp;
   int mid;
   int first;
   int last;
   int min;
   int local;


public:
     void LinnerSearch(/* arguments */) {



             cout<<"Enter The Size of Array"<<endl;
             cin>>num;

              for(i=0;i<num;i++)  // Array Starting
              {

                      cout<<"Enter The first element to store in the array"<<" "<<i+1<<endl;
                      cin>>size[i];
              }
                       cout<<endl;
                cout<<"Enter Number which Do you want to search  "<<endl;
                cin>>key;

                for(i=0;i<num;i++)
                {
                    if(key==size[i])
                    {
                       cout<<key<<" "<<"Congratulation ! Number is Found in The array & Index number is"<<" "<<i<<endl;

                       s=1;
                       break;
                       cout<<endl;
                    }



                }

                if (s==0)
                {
                  cout<<"OPS !Number is not Found "<<endl;

                }


       /* code */
     }

     // LinnerSearch Is END ================================================================================

   // Bubble Sorting

   void Bubblesorting(/* arguments */) {




                  cout<<"Enter The Size of Array"<<endl;
                  cin>>num;

                   for(i=0 ; i<num; i++)  // Array Starting
                   {

                           cout<<"Enter The first element to store in the array"<<" "<<i+1<<endl;
                           cin>>size[i];
                   }
                            cout<<endl;

        cout<<"Array Befor Sorting is"<<endl;

        for(i=0; i<num; i++)
        {
            cout<<"  "<<size[i];
        }
        cout<<endl;
  cout<<endl;
char ch;
    cout<<"Press A For Assending Order"<<endl;
    cout<<endl;
    cout<<"Press B For Decending Order"<<endl;
    cin>>ch;

    if (ch== 'A')
    {



         for(i=0; i<(num-1); i++)
         {

            for(j=0; j<(num-i-1) ;j++)
            {
                 if(size[j]> size[j+1])
                 {
                     temp = size[j];
                     size[j] =size[j+1];
                     size[j+1]= temp;

                 }
            }

         }
          cout<<endl;
          cout<<"Number after sorting is"<<endl;

          for(i=0 ; i<num;i++)
          {
             cout<<"  "<<size[i];
          }

}
// End IF

  else if (ch == 'B')
  {



for(i=0; i<(num-1); i++)
{

   for(j=0; j<(num-i-1) ;j++)
   {
        if(size[j]< size[j+1])
        {
            temp = size[j];
            size[j] =size[j+1];
            size[j+1]= temp;

        }
   }

}
 cout<<endl;
 cout<<"Number after sorting is"<<endl;

 for(i=0 ; i<num;i++)
 {
    cout<<"  "<<size[i];
 }



}
else
{
  cout<<"Invalid"<<endl;
}






     /* code */
   }

// binarysearch End =================================================

void binarysearch(/* arguments */) {

  cout<<"Enter The Size of Array"<<endl;
  cin>>num;

   for(i=0;i<num;i++)  // Array Starting
   {

           cout<<"Enter The first element to store in the array"<<" "<<i+1<<endl;
           cin>>size[i];
   }
            cout<<endl;
     cout<<"Enter Number which Do you want to search  "<<endl;
     cin>>key;

     first=0;
     last=num-1;
   mid=(first+last)/2;


        while(first <= last)
        {
            if(size[mid] < key)
            {
                first=mid+1;
            }

            else if (size[mid] == key)
            {
               cout<<"Congratulation ! Number is Found at Index"<<"  " <<mid<<endl;
               break;
            }

      else
       {
          last=mid-1;
       }


       mid=(first+last)/2;


        }

         if(first > last)
         {
             cout<<"Sorry Number is not found in the array"<<endl;
         }







  /* code */
}

// binarysearch  is End  =========================================

 void SelectionSearch(/* arguments */) {

   cout<<"Enter The Size of Array"<<endl;
   cin>>num;

    for(i=0;i<num;i++)  // Array Starting
    {

            cout<<"Enter The first element to store in the array"<<" "<<i+1<<endl;
            cin>>size[i];
    }
             cout<<endl;

char user;
  cout<<"Press A For Assending Order"<<endl;
  cout<<"Press B For Decending Order"<<endl;



  cin>>user;


if (user == 'A')

{





     for (i=0;i<(num-1); i++)
     {
         min=size[i];
         local=i;

         for(j=i+1;j<num;j++)
         {

                 if(size[j] < min)
                 {
                     min = size[j];
                       local = j;
                 }

         }

          temp= size[i];
          size[i]= size[local];
          size[local] = temp;
     }

 cout<<"Array After sorting is "<<endl;
    cout<<endl;

  for(i=0;i<num;i++)
  {
      cout<<" "<<size[i];
  }
   /* code */


}

else if (user == 'B')


{



       for (i=0;i<(num-1); i++)
       {
           min=size[i];
           local=i;

           for(j=i+1;j<num;j++)
           {

                   if(size[j] > min)
                   {
                       min = size[j];
                         local = j;
                   }

           }

            temp= size[i];
            size[i]= size[local];
            size[local] = temp;
       }

   cout<<"Array After sorting is "<<endl;
      cout<<endl;

    for(i=0;i<num;i++)
    {
        cout<<" "<<size[i];
    }



}


else
{
   cout<<"Invalid Key"<<endl;
}

// End
}



};





int main()
{
  int input;
    AllProgram obj;

cout<<"Press 1 for Linner Search "<<endl;
cout<<"Press 2 for Bubble Sorting"<<endl;
cout<<"Press 3 for Binarry Search"<<endl;
cout<<"Press 4 for Selection Search"<<endl;

cout<<endl;

      cout<<"Enter Your Choice"<<endl;
          cin>>input;

     if(input ==1 )
     {


    obj.LinnerSearch();
}

 else if (input==2)
 {
    obj.Bubblesorting();
 }

else if (input == 3)
{
    obj.binarysearch();
}
  else if(input == 4)
{

   obj.SelectionSearch();
}

 else
 {
    cout<<"Invalid Option"<<endl;
 }


}

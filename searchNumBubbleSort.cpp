#include<iostream>
using namespace std;
void bubble(int v[] , int dim)
{
     bool flag;
     int k,app;
     int numero;

     do{
         flag=false;
         for(k=0;k<dim;k++)

         if(v[k+1]<v[k])
         {
                        app=v[k];
                        v[k]=v[k+1];
                        v[k+1]=app;
                        flag=true;
         }
         }while (flag==true);

}

int main()
{
     int k,l,r,med;
     int vett[10];
     bool flag=false;
     int cas,numero,posizione;

     srand (time(0));
     for (k=0;k<10;k++)
     {
         cas=rand()%30;
         vett[k]=cas;
     }
     bubble(vett,10);
     l=0;
     r=9;

     for(k=0;k<10;k++)
       cout<<vett[k]<<" ";

       cout<<"inserire il numero da cercare"<<endl;
       cin>>numero;

       do{
                   med=(l+r)/2;
                   if(numero==vett[med])
                   {
                        posizione=med;
                        flag = true;
                   }
                   if (numero<vett[med])
                        r=med-1;
                   else
                        l=med+1;
      }while(l<=r && flag==false);


     if(flag==true)
           cout<<"il numero e' stato trovato in posizione:    "<<posizione+1<<endl;
     else
           cout<<"il numero non e' stato trovato"<<endl;

system("pause");

}

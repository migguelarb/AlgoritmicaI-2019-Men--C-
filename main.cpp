#include <iostream>

using namespace std;

void menu(){
	
	system("CLS");
    cout<< "\tMENU\n1.Ingreso de datos del trabajador\n2.Calculo de porcentaje\n3.Calculo de pago total\n4.Salir";

}

int main(){
    float salario=0,  total=0, por1=0, por2=0;
    int men=0, may=0, n=0;
    char opc=' ';

  string nombre;
  
  

   do{
   menu();
   cout << "\n\nSeleccione opcion ---->";
   cin>>opc;
   switch (opc){
       case '1':
       		system("CLS");
           cout << "Ingrese numero de Trabajadores ---> ";
           cin >> n ;
           for (int i=0; i<n ; i++){
                cout<<"Ingrese el nombre: \n";
                cin >> nombre;
                cout << "ingrese el sueldo: \n";
                cin >> salario;

                total=total + salario;
                cout << endl;

                if(salario<1500){
                    men++;
                    }//finsi
                else {
                    may++;
                    }//finsino
                }//fin for
                system ("PAUSE");
           break;
       case '2':
       		system("CLS");
            por1= (men*100)/6;
            por2= 100-por1;

            cout<< "El procentaje de menor sueldo es: " << por1 << "% \n"
                << "El porcentaje de mayor sueldo es: " << por2 << "% \n" ;
                system ("PAUSE");


           break;
       case '3':
       		system("CLS");
        	cout << "El sueldo total a pagar es: " << total << endl << endl;
        	system ("PAUSE");
            break;
       case '4':
            break;
       default:
        cout << "ErrorOpcion"
        ;


   }//finswitch
}while(opc != '4');//fin do

   return 0;
}


 * Menu.cpp
   *
   *  Created on: May 23, 2016
 - *      Author: raydelto
 + *      Author: raydelto  y MARIELA
   */
  
  #include "Menu.h"
 @@ -14,6 +14,139 @@ void Menu::show()
  {
  	//TODO: Implement this method.
  	cout << "Implement the menu" << endl;
 +	
 +	
 +	system("cls");
 +		cout <<endl << "Library management system\ <<endl;
 +		cout <<endl << "1 -List the book" <<endl;
 +		cout << "2 - Insert book" <<endl;
 +		cout << "3 - Order last book stack <<endl;
 +		cout << "4 -Search book by category" <<endl;
 +		cout << "5 - get out" <<endl;
 +
 +		cout <<endl << "Select an option => ";
 +	}
 +	
 +	
 +	int main()
 +{
 +
 +	string title, author, editor, category, search;
 +		int option = 0, s = 0, a = 0, b = 0;
 +		book book1 = NULL;
 +		string menssage = "";
 +		
 +	do
 +	{
 +		menu(); cin >> option;
 +		switch(option)
 +		{
 +		
 +		case 2:
 +			do{
 +				system("cls");
 +				cout <<endl << "Library management system\n";
 +				cout <<"\nInsert book\n";
 +				cout  << "\n 1 - Title: ";
 +				cin >> title;
 +				cout << "\n2 - Author: ";
 +				cin >> author;
 +				cout << endl << "3 - Editor: ";
 +				cin >> editor;
 +				cout << endl << "4 - Category: ";
 +				cin >> category;
 +					
 +				add(book1,title, author, editor,category);
 +
 +				cout <<endl<<endl<< "1 - keep adding" <<endl;
 +				cout << "2 - get out" <<endl;
 +				cout <<endl << "Select an option => ";
 +				cin >>b;
 +			}while(b != 2);
 +						
 +			break;
 +
 +		case 1:
 +			system("cls");
 +			cout <<endl << "Library management system <<endl;
 +			cout <<endl << "List the book" <<endl;
 +
 +			if(book1 != NULL)
 +			{
 +				extract(book1);
 +
 +			}else{cout <<endl << "We have registered books:(" <<endl;}
 +
 +
 +				cout <<endl << "1 - get out(if = 1) ->: ";
 +				cin >> s;
 +
 +				if(s == 1)
 +				{
 +					menu();
 +				}			
 +			
 +			break;
 +		case 3:
 +			system("cls");
 +			cout <<"Last book Added"<<endl<<endl;
 +
 +			if(book1 != NULL)
 +			{
 +				string to show = Last book(book1);
 +				cout <to show<<endl;
 +			}
 +
 +			cout <<endl << "1 - get out (if = 1) ->: ";
 +			cin >> s;
 +
 +				if(s == 1)
 +				{
 +					menu();
 +				}
 +			
 +			break;
 +
 +		case 4:
 +				
 +				system("cls");
 +				cout <<"Search "<<endl<<endl;
 +				if(book1 == NULL){
 +
 +					cout <<endl<<"We have registered books:("<<endl;
 +				}
 +
 +				if(book1 != NULL)
 +				{
 +					cout << "Select the category you want to search: ";
 +				    cin >> search;
 +				Search(book1,search);	
 +
 +				}
 +			
 +				cout <<endl << "1 - get out(if = 1) ";
 +				if(book1 != NULL)
 +				{
 +				  cout <<endl << "2 - Keep looking ";
 +				}
 +				cout <<endl << " Select an option: ";
 +				cin >> s;
 +				if(s == 1){
 +					
 +					menu();
 +				}
 +	
 +			break;
 +
 +		  }
 +	}while(option != 5);
 +
 +
 +
 +	system("pause");
 +	return 0;
 +}
 +
  }
  
  Menu::Menu()

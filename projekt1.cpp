#include <iostream>
#include <string>

using namespace std;

//#include<iostream>
//#include<ctime>
//#include <string>
//using namespace std;
//int main() {
//
//	string BookTitle[20];
//	string Author[20];
//	int Price[20];
//	int choice = 0;
//	const int maxbooks[20];
//
//	cout << "1. Add new book " << endl;
//	cout << "2. Present all " << endl;
//	cout << "3. Search based on title " << endl;
//	cout << "4. Present the cheapest book " << endl;
//	cout << "5. Exit " << endl;
//
//	cin >> choice;
//	cin.ignore();
//
//	while (choice != 5)
//	{
//		if (choice == 1)
//		{
//			system("CLS");
//			cout << " Your choice: " << choice << endl;
//
//			cout << " Input title: " << endl;
//		
//			for (int i = nrofbooks; i < maxbooks; ++i)
//			{
//				cin >> BookTitle[i];
//			}
//
//			cout << " Input Author: " << endl;
//			/*cin >> Author;
//			cin.ignore();*/
//			for (int i = 0; i < 1; ++i)
//			{
//				cin >> Author[i];
//			}
//
//			cout << " Input price: " << endl;
//			/*cin >> Price;
//			cin.ignore();*/
//			for (int i = 0; i < 1; ++i)
//			{
//				cin >> Price[i];
//			}
//			cin.ignore();
//		}
//		if (choice == 2)
//		{
//			system("CLS");
//			cout << " Your choice: " << choice << endl;
//
//			cout << " Title: ";
//			for (int i = 0; i < 1; ++i)
//			{
//				cout << BookTitle[i] << "  " << endl;
//			}
//			cout << " Author: ";
//			for (int i = 0; i < 1; ++i)
//			{
//				cout << Author[i] << "  " << endl;
//			}
//			cout << " Price: ";
//			for (int i = 0; i < 1; ++i)
//			{
//				cout << Price[i] << "  " << endl;
//			}
//		}
//		/*if (choice == 3)
//		{
//			system("CLS");
//			cout << " Your choice: " << choice << endl;
//
//			cout << " What title are you serching for?: ";
//			cin >> BookTitle;
//			cin.ignore();
//			cout << " Author: " << endl;
//			cout << " Price: " << endl;
//		}
//		if (choice == 4)
//		{
//			system("CLS");
//			cout << " Your choice: " << choice << endl;
//
//			cout << " the cheapest book is: " << endl;
//		}*/
//
//		cout << "1. Add new book " << endl;
//		cout << "2. Present all " << endl;
//		cout << "3. Search based on title " << endl;
//		cout << "4. Present the cheapest book " << endl;
//		cout << "5. Exit " << endl;
//		cin >> choice;
//		cin.ignore();
//	}
//	if (choice == 5)
//	{
//		system("CLS");
//		cout << " Your choice: " << choice << endl;
//
//		cout << " Goodbye! ";
//
//		exit;
//	}
//
//	return 0;
//}
int menu();
void printbooks(string title[], string author[], int price[], int nrofbooks);
void findcheapestbook(string title[], string author[], int price[], int nrofbooks);
//void searchbook(string title[], string author[], int price[], int nrofbooks);
void addbook(string title[], string author[], int price[], int nrofbooks);





int main()
{
	
	int choice = 0;
	int nrofBooks = 0;
	const int maxBooks = 20; // sätter maxbooks till 20.
	int price[maxBooks];
	string title[maxBooks];
	string author[maxBooks];
	choice = menu();
	

		if (choice == 1) {
				
			addbook(title, author, price, nrofBooks);
			
		}
		

		if (choice == 2) 
		{
			
			printbooks(title, author, price, nrofBooks);
		}

		if (choice == 3) 


		if (choice == 4) 
		{
			
			findcheapestbook(title, author, price, nrofBooks);
		}
		
		if (choice == 5) 
		{


		}



		return menu();
}


int menu() {
	int choice = 0;
	cout << "1. Add a new book: " << endl;
	cout << "2. View all the books in the store: " << endl;
	cout << "3. Search for a Book: " << endl;
	cout << "4. Present the cheapest book: " << endl;
	cout << "5. Exit: " << endl;
	cin >> choice;
	cin.ignore();
	return 0;
}



//funktioner


void printbooks(string title[], string author[], int price[], int nrofBooks) {
	cout << "These books are available: " << endl;
	for (int i = 0; i < nrofBooks; i++)
	{
		cout << title[i] << " " << author[i] << " " << price[i] << " " << endl;

	}



}
                                                                           // Denna funktion hittar den billigaste boken, genom att skapa ett index och sedan jämföra värdet av indexplatsen i price.
void findcheapestbook(string title[], string author[], int price[], int nrofBooks) {

	cout << " The cheapest book available is: " << endl;
	int index = 0;                                                      // skapa index
	 int min = price[index];                                           //skapar första minvärde
	for (int i = 0; i < nrofBooks; i++) 
		                                                             // loopa antal böcker
	{
  
		if (price[i] < min) {                                     // är priser på nuvarande indexplats mindre än nuvarande minvärde
			min = price[i];                                      // Sätter nuvarande pris till min
			index = i;                                          // sparar indexplatsen till nuvraande minsta värde.
		}
	}
	cout << title[index] << " " << author[index] << " " << price[index] << " " << endl;
}
//void searchbook(string title[], string author[], int price[], int nrofbooks); {
//
//	string searchbook = cin
//}

void addbook(string title[], string author[], int price[], int nrofbooks) 

{
	for(int i = 0; i < nrofbooks; i++)
	{
		cout << "enter title:" << endl;
	}
	
	


	
	

}




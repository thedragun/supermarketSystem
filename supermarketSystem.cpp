
#include <iostream>
#include <string>

using namespace std;

void displayData(int r1c1, string r1c2, int r1c3, int r1c4, int r1c5, int r1c6, int r2c1, string r2c2, int r2c3, int r2c4, int r2c5, int r2c6, int r3c1, string r3c2, int r3c3, int r3c4, int r3c5, int r3c6, int r4c1, string r4c2, int r4c3, int r4c4, int r4c5, int r4c6, int r5c1, string r5c2, int r5c3, int r5c4, int r5c5, int r5c6 ) {
	
	cout << r1c1 << "\t" << r1c2 << "\t" << r1c2 << "\t" << r1c3 << "\t" << r1c4 << "\t" << r1c5 << "\t" << r1c6 << "\n";
	cout << r2c1 << "\t" << r2c2 << "\t" << r2c2 << "\t" << r2c3 << "\t" << r2c4 << "\t" << r2c5 << "\t" << r2c6 << "\n";
	cout << r3c1 << "\t" << r3c2 << "\t" << r3c2 << "\t" << r3c3 << "\t" << r3c4 << "\t" << r3c5 << "\t" << r3c6 << "\n";
	cout << r4c1 << "\t" << r4c2 << "\t" << r4c2 << "\t" << r4c3 << "\t" << r4c4 << "\t" << r4c5 << "\t" << r4c6 << "\n";
	cout << r5c1 << "\t" << r5c2 << "\t" << r5c2 << "\t" << r5c3 << "\t" << r5c4 << "\t" << r5c5 << "\t" << r5c6 << "\n";

}

void marketProfit(int cost, int sell, int cost1, int sell1, int cost2, int sell2, int cost3, int sell3, int cost4, int sell4) {

	int profit, profit1, profit2, profit3, profit4;

	profit = sell - cost;

	profit1 = sell1 - cost1;

	profit2 = sell2 - cost2;

	profit3 = sell3 - cost3;

	profit4 = sell4 - cost4;

	cout << "\n\n Profits: \n" << "item one: " << profit << "\nItem two: " << profit1 << "\nitem three: " << profit2 << "\nitem four: " << profit3 << "\nitem five: " << profit4 << "\nTotal profits: " << profit + profit1 + profit2 + profit3 + profit4;
}

int main()
{
// item code | item cost | selling price | in stock | reorder level | 
	int marketData[5][5];
	string itemName[5];



	for (int i = 0; i != 5; i++) {
		cout << "\nWhat is the name of the item: ";
		cin >> itemName[i];

		cout << "\nWhat is the item code: ";
		cin >> marketData[0][i];

		cout << "\nItem cost: ";
		cin >> marketData[1][i];

		cout << "\nItem selling price: ";
		cin >> marketData[2][i];

		cout << "\nHow many in stock: ";
		cin >> marketData[3][i];

		cout << "\nAt what level will this item be restocked: ";
		cin >> marketData[4][i];
	}





	displayData(marketData[0][0], itemName[0], marketData[0][1], marketData[0][2], marketData[0][3], marketData[0][4], marketData[1][0], itemName[1], marketData[1][1], marketData[1][2], marketData[1][3], marketData[1][4], marketData[2][0], itemName[2], marketData[2][1], marketData[2][2], marketData[2][3], marketData[2][4], marketData[3][0], itemName[3], marketData[3][1], marketData[3][2], marketData[3][3], marketData[3][4], marketData[4][0], itemName[4], marketData[4][1], marketData[4][2], marketData[4][3], marketData[4][4]);

	marketProfit(marketData[1][0], marketData[2][0], marketData[1][1], marketData[2][1], marketData[1][2], marketData[2][2], marketData[1][3], marketData[2][3], marketData[1][4], marketData[2][4]);

}
#include <iostream>
using namespace std;

enum suit {
	club = 0,
	diamonds = 10,
	hearts = 20,
	spades = 3
}card;

int main(){
	card = club;
	for ( int card = club; card !=hearts+1; card++ )
{
	if (card == club) cout << "club" << endl;
	else if (card == diamonds) cout << "diamonds" << endl;
	else if (card == hearts) cout << "hearts" << endl;
	else if (card == spades) cout << "spades" << endl;
   else cout << card << endl;
}
	cout << "enum degiskeninin boyutu = " << sizeof (card) << endl;
	return 0;
}

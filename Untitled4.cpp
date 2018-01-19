#include <string>
using namespace std;

class layangan{
	public:
		void bahan(string bambu);
		string jenis;
		double harga;
};
int main () {
	layangan bambu;
	
	bambu.jenis ="kuning";
	bambu.harga = 50000;
	
	cout<<"jenis yang dipakai "<< (bambu.jenis)<<endl;
	cout<<"Harga modal nya "<< (bambu.harga)<<endl;
	
	bambu.bahan("bambu terbuat dari pohonnya sendiri");
}

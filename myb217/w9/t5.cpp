
#include <iostream>
#include <cpr/response.h>
#include <cpr/cpr.h>
#include <cpr/cpr.cpp>

using namespace std;

int main() {
	// POST - CREATE komutu 
	auto r = cpr::Post(\
			cpr::Url{"http://jsonplaceholder.typicode.com/albums"});
		
	// HTTP response status
	cout << r.status_code << endl; 

	// Content-type tipi
	cout << r.header["content-type"] << endl;

	// response string
	cout << r.text << endl;    
}
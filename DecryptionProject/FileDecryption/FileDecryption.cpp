#include <fstream>
#include <windows.h>
#include <iostream>

//#define encrypt (Byte + key) - 342 
#define decrypt (Byte + 342) - key  

using namespace std;

//int fileEncrypt(const char*);
int fileDecrypt(const char*);

int main()
{
    const char* fileName = "C:\\TestFiles\\dbgview.exe";
    //File which you want to encrpt or decrypt

    //fileEncrypt(fileName);
    //Encrypts File

    fileDecrypt(fileName);
    //Decrypts file

    return 0;
}

//int fileEncrypt(const char* fileName)
//{
//    int key = 2021;
//    const char* f_unfound = "C:\\Encrypt\\s_ecure.txt";
//    ifstream read(fileName, ios::binary);
//    ofstream write(f_unfound, ios::binary);
//    char Byte;
//
//    while (1)
//    {
//        Byte = read.get();
//        if (read.fail()) {
//            CopyFile(f_unfound, fileName, FALSE);
//            return 0;
//        }
//        Byte = encrypt;
//        write.put(Byte);
//    }
//}

int fileDecrypt(const char* fileName)
{
    int key = 0;
    cout << "enter key to decrypt : ";
    cin >> key;
    cout << endl;
    const char* f_unfound = "C:\\Encrypt\\s_ecure.txt";
    ifstream read(fileName, ios::binary);
    ofstream write(f_unfound, ios::binary);
    char Byte;

    while (1)
    {
        Byte = read.get();
        if (read.fail()) {
            CopyFile(f_unfound, fileName, FALSE);
            return 0;
        }
        Byte = decrypt;
        write.put(Byte);
    }
}
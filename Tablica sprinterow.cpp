#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
using namespace std;

int A[100] = {0};
int N = 0, k = 0;
bool koniec = 0;
void dodaj_wynik() {
    int x;
    cout<<"Chcesz dodac wynik? 1 - tak, 2 - nie"<<endl;
    cin>>x;
    if(x == 1) {
        cin>>A[N];
        N++;
    }
    if(x == 2) koniec = true;
}
void wyczysc_tablice() {
    for(int i=0;i<N;i++) A[i]=0;
}
int wypisz_wyniki() {
    if(A[0]==0) {
        cout<<"Tablica pusta"<<endl;
        return 0;
    } else
    for(int i=0;i<N;i++) cout<<A[i]<<" ";
}
int main() {
    while(!koniec) {
        dodaj_wynik();
        for(int i=0;i<N-1;i++) {
            for(int j=0;j<N-1-i;j++) {
                if(A[j]>A[j+1]) {
                    k = A[j+1];
                    A[j+1] = A[j];
                    A[j] = k;
                }
            }
        }
    }
    wypisz_wyniki();
    return 0;
}

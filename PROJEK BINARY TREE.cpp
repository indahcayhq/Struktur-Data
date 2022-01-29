#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct node{
 char data;
 node * kiri;
 node * kanan;
 
};
node *akar =NULL;
void tambah (node **akar , char isi){
 if((*akar)==NULL){
  node *baru;
  baru = new node;
  baru -> data=isi;
  baru -> kiri=NULL;
  baru -> kanan=NULL;
  (*akar)= baru;
  
 }
}
void preOrder(node *akar){
 if(akar !=NULL){
  cout<<akar ->data<<"";
  preOrder(akar -> kiri);
  preOrder (akar -> kanan);
  
 }
}
void inOrder (node *akar ){
 if(akar !=NULL){
  inOrder (akar ->kiri);
  cout<<akar->data<<"";
  inOrder (akar -> kanan);
 }
}
void postOrder (node *akar){
 if(akar !=NULL){
  postOrder (akar ->kiri);
  postOrder (akar -> kanan);
  cout<<akar->data<<"";
  
 }
}
int main() {
 char abjad;
 tambah(&akar , abjad= 'm');
 tambah(&akar -> kiri,abjad= 'l');
 tambah(&akar ->kiri ->kiri, abjad= 'b');
 tambah(&akar ->kanan, abjad = 's');
 tambah(&akar ->kanan ->kiri, abjad = 'q');
 tambah(&akar ->kiri ->kiri -> kiri, abjad ='a');
 tambah(&akar ->kiri ->kiri ->kanan , abjad = 'e');
 tambah(&akar ->kiri -> kiri ->kanan ->kanan, abjad = 'g');
 tambah (&akar ->kanan -> kiri ->kiri, abjad = 'o');
 tambah (&akar ->kanan -> kiri ->kiri -> kiri, abjad = 'n');
 cout<<"\n Hasil preOrder adalah : ";
 preOrder(akar);
 cout<<"\n Hasil inOrder adalah : ";
 inOrder(akar);
 cout<<"\n Hasil postOrder adalah : ";
 postOrder(akar);

}
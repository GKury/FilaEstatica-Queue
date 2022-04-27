/*
Nome: Gabriel Kury Fonseca
Tia: 32153848

Nome: Gabriel Marques Gonçalves Almeida
Tia: 32066724

Referências:

O site w3schools parauma revisão básica relacionada a while em C++
https://www.w3schools.com/cpp/cpp_while_loop.asp

Além disso, foi consultado o material apresentado em aula e fui na monitoria
*/

#include <iostream>
#include <clocale>
#include "Queue.h"

void PrintFrontCountSize(const Queue& queue)
{
  char front = Front(queue);
  if (front == '\0')
    std::cout << "Frente: Fila vazia.\n";
  else
   std::cout << "Frente: " << front << '\n';
  std::cout << "Elementos na fila: " << Count(queue) << '/' << Size(queue)
    << ", a fila " << (IsEmpty(queue) ? "está vazia" : "contém elementos") << ".\n";
}
int main()
{
  setlocale(LC_CTYPE, "Portuguese");
  Queue queue = Create();
  PrintFrontCountSize(queue);
  std::cout << "--------------------\n";
  std::string str = "Queue Hello, World!";
  for (int i = 0; i < str.length(); ++i)
  {
    if (!Enqueue(queue, str[i]))
      std::cout << "Fila cheia! Não foi possível inserir " << str[i] << '\n';
    PrintFrontCountSize(queue);
  }
  std::cout << "--------------------\n";
  char front;
  while (!IsEmpty(queue))
  {
    front = Dequeue(queue);
    std::cout << "Dequeue retornou: " << front << '\n';
    PrintFrontCountSize(queue);
  }
  std::cout << "--------------------\n";
  for (const char& c : str)
  {
    if (!Enqueue(queue, c))
      std::cout << "Fila cheia! Não foi possível inserir " << c << '\n';
  }
  PrintFrontCountSize(queue);
  std::cout << "--------------------\n";
  Clear(queue);
  PrintFrontCountSize(queue);
}
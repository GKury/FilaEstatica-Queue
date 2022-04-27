/*
Nome: Gabriel Kury Fonseca
Tia: 32153848

Nome: Gabriel Marques Gonçalves Almeida
Tia: 32066724
*/

#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <iostream>

const int TAMANHO = 16;

struct Queue
{
  char solo [TAMANHO];

  int front;
  int rear;
  int count;
};

Queue Create();

bool Enqueue(Queue& queue, char value);

char Dequeue(Queue& queue);

char Front(const Queue& queue);

int Size(const Queue& queue);

int Count(const Queue& queue);

bool IsEmpty(const Queue& queue);

void Clear(Queue& queue);

#endif
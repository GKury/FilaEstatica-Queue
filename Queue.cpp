/*
Nome: Gabriel Kury Fonseca
Tia: 32153848

Nome: Gabriel Marques Gonçalves Almeida
Tia: 32066724
*/

#include "Queue.h"

Queue Create()
{
  Queue queue = { {}, 0, 0, 0 };
  return queue;
}

bool Enqueue(Queue& queue, char value)
{
  if(queue.count < (TAMANHO)) {
    queue.solo[queue.rear] = value;
    queue.rear = (queue.rear + 1)%TAMANHO;
    queue.count += 1;
    return true;
  } else{
    return false;
  }
}

char Dequeue(Queue& queue)
{
  if(queue.count != 0) {
    char ax = queue.solo[queue.front];
    queue.solo[queue.front] = '\0';
    queue.front = (queue.front + 1)%TAMANHO;
    queue.count -= 1;
    return ax;
  } else{
    return '\0';
  }
}

char Front(const Queue& queue)
{
  if(queue.count != 0) {
    return queue.solo[queue.front];
  } else{
    return '\0';
  }
}

int Size(const Queue& queue)
{
  return TAMANHO;
}

int Count(const Queue& queue)
{
  return queue.count;
}

bool IsEmpty(const Queue& queue)
{
  if(queue.count == 0) {
    return true;
  } else{
    return false;
  }
}

void Clear(Queue& queue)
{
  queue.front = 0;
  queue.rear = 0;
  queue.count = 0;
  int contador = 0;
  while (contador < TAMANHO){
    queue.solo[contador] = '\0';
    contador++;
  }
}


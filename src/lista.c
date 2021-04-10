#include "lista.h"
#include <stdlib.h>

Lista nova_lista() {
	Lista ret;
	ret.cabeca = NULL;
	return ret;
}

Lista add_lista(Lista lst, void* content) {
	Node* node = (Node*) malloc(sizeof(Node));
	node->content = content;
	node->next = lst.cabeca;
	Lista l;
	l.cabeca = node;
	return l;
}

Lista remove_lista(Lista lst) {
	Node* old = lst.cabeca;
	lst.cabeca = old->next;
	free(old->content);
	free(old);
	return lst;
}


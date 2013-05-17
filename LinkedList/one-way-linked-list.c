/*  @File: one-way-linked-list.c
 *  Author: PIatan
 *  Date: 2013/03/23
 *  Description:
 *      Imply the one-way-linked-list.
 *      This program has these functions:
 *          insert: insert one element to the list
 *          remove: remove one element to the list
 *          show:   show all the elements in the list
 * 
 *  Copyright (c) 2013, PIatan
 *  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Peter Chang nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY PIatan "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL PIatan BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_IN 100

typedef struct _Node {
    char name[MAX_IN];
    int id, score;
    struct _Node *next;
} Node;

int list_len = 0;
Node *head, *prev;

void show_func();           /* display all list function */
Node *new_node();           /* make a new node */
void insert_f(Node input);  /* insert a new element to the list */
void remove_f(int rm_id);   /* remove a existed element in the list */
void show_f();              /* display all the list elements */

int main(int argc, char *argv[])
{
    char oper[30];
    int rm_id;
    Node tmp;
    head = prev = NULL;
    /* ^--- very important before we use the pointer, we MUST set it to the NULL */
    show_func();
    while (~scanf("%s", oper)) {
        if (oper[0]=='i') {
            /* get information */
            printf("name ? ");
            scanf("%s", tmp.name);
            printf("id ? ");
            scanf("%d", &tmp.id);
            printf("score ? ");
            scanf("%d", &tmp.score);
            tmp.next = NULL;
            /* get information */
            insert_f(tmp);
        }
        else if (oper[0]=='r') {
            /* get information */
            printf("remove id ? ");
            scanf("%d", &rm_id);
            /* get information */
            remove_f(rm_id);
        }
        else if (oper[0]=='s') {
            show_f();
        }
    }
    return 0;
}

void show_func()
{
    printf("----------------------------------------------\n");
    printf("|                                            |\n");
    printf("|            Simple linked list              |\n");
    printf("|          Maintain Name, id, score          |\n");
    printf("|                                            |\n");
    printf("|                 1.insert                   |\n");
    printf("|                 2.remove                   |\n");
    printf("|                 3.show                     |\n");
    printf("----------------------------------------------\n");
}

Node *new_node(Node input)
{
    Node *new = (Node *)malloc(sizeof(Node));
    new->id = input.id;
    new->score = input.score;
    strcpy(new->name, input.name);
    new->next = NULL;

    return new;
}

void insert_f(Node input)
{
    Node *this_node, *tmp;
    list_len++;
    tmp = new_node(input);

    if (head == NULL) {
        tmp->next = NULL;
        head = tmp;
    }
    else {
        this_node = head;
        if (tmp->id < this_node->id) {
            /* smaller id insert front */
            tmp->next = this_node;
            head = tmp;
        }
        else {
            while (this_node->next != NULL) {
                prev = this_node;
                this_node = this_node->next;
                if (tmp->id < this_node->id) {
                    /* in the middle */
                    tmp->next = this_node;
                    prev->next = tmp;
                    break;
                }
            }
            if (tmp->id >= this_node->id) {
                tmp->next = NULL;
                this_node->next = tmp;
            }
        }
    }
}

void remove_f(int rm_id)
{
    Node *this_node, *rm_node;
    int is_rm = 0;
    if (head == NULL) {
        printf("The list is empty !!\n");
        return;
    }
    list_len--;

    this_node = head;
    if (rm_id == head->id) {
        rm_node = head;
        head = head->next;
        this_node = head;
        free(rm_node);
        return;
        is_rm = 1;
    }
    while (this_node->next != NULL) {
        prev = this_node;
        this_node = this_node->next;
        if (rm_id == this_node->id) {
            rm_node = this_node;
            prev->next = this_node->next;
            this_node = this_node->next;
            free(rm_node);
            is_rm = 1;
            return;
        }
    }
    if (!is_rm) {
        list_len++;
        printf("Cannot find the element to remove !!\n");
    }
}
void show_f()
{
    Node *this_node;
    if (head == NULL) {
        printf("The list is empty !!\n");
    }
    else {
        this_node = head;
        printf("\n|ID    | Name     | Score |\n");
        while (this_node != NULL) {
            printf("|%5d | %8s | %5d |\n", this_node->id, this_node->name, this_node->score);
            this_node = this_node->next;
        }
        printf("There are %d element(s) in the list.\n", list_len);
    }
}

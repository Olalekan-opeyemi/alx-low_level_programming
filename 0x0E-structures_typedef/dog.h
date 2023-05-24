#ifndef DOG
#define DOG
/**
 * struct dog - structure name
 * @name: member1
 * @age: member2
 * @owner: member3
 */
struct dog
	{
		char *name;
		float age;
		char *owner;
	};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
                                                                   void free_dog(dog_t *d)


endif/*#ifndef DOG*/

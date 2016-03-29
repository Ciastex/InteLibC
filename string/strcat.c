/*
 * File name: strcat.c
 * Description: Part of the string interface implementation.
 *
 * * * */
char *strcat(char *destination, const char *source) {
    char *tmp_dest = destination;

    while(*destination) {
        destination++;
    }

    while((*destination++ = *source++));

    return tmp_dest;
}

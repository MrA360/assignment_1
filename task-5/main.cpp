#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    char arr[] = "hello. hello";

    cout << "Original String:" << arr << endl;
    cout << "String in UPPERCASE:";
    for (int x = 0; x < strlen(arr); x++)
        putchar(toupper(arr[x]));

        "\n";

    return 0;
}

    //Make a program which converts any given string to sentence
    //case. For example:

    // Please enter some text: hello this is a sentence. and here is another. and another.
    //
    // > Hello this is a sentence. And here is another. And another.

    //The program should be able to work regardless of whitespace between
    //period characters. Note that proper nouns shouldn't be considered here, just
    //the rule that if a character is after a period, it should be capitalised.

    //Additionally, you should expand the solution to:
    //
    // - Show the given text in sentence case, lowercase, or uppercase
    // - Detect if the text has no alphabetical characters, and if so, show a warning
    //
    // e.g.

    // Please enter some text: hello this is another sentence. blah. something else.
    //
    // - Sentence case: Hello this is another sentence. Blah. Something else.
    // - Lowercase: hello this is another sentence. blah. something else.
    // - Uppercase: HELLO THIS IS ANOTHER SENTENCE. BLAH. SOMETHING ELSE.
    //

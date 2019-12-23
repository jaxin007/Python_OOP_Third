class Game {
    char[] word = { 't', 'h', 'i', 's' };
    char[] hiddenWord = { '*', '*', '*', '*' };
    int attempts = 8;

    boolean guess(char c) {
        attempts--;
        boolean found = false;
        for (int i = 0; i < word.length; i++) {
            if (c == word[i]) {
                hiddenWord[i] = c;
                found = true;
            }
        }
        return found;
    }

}

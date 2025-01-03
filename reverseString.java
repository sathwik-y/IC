public class reverseString {
    public String reverseWords(String s) {
        String[] words = s.trim().split("\\s+");
        StringBuilder reversed = new StringBuilder();
        for (int i = words.length - 1; i >= 0; i--) {
            reversed.append(words[i]);
            if (i != 0) reversed.append(" ");
        }
        return reversed.toString();
    }

    public static void main(String[] args) {
        reverseString reverse = new reverseString();
        // Example input
        String input = "  Hello world  ";
        String result = reverse.reverseWords(input);
        
        // Output the result
        System.out.println("Original string: \"" + input + "\"");
        System.out.println("Reversed words: \"" + result + "\"");
        System.out.println("\"" + result + "\"");
    }
}

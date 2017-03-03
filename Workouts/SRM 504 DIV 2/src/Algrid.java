public class Algrid {

    public String[] makeProgram_2(String[] output) {
        int column = output[0].length();
        int row = output.length;
        for (int i = row - 2; i >= 0; i--) {
            char[] outputV = output[i + 1].toCharArray();
            for (int j = column - 2; j >= 0; j--) {
                char a, b;
                a = output[i].charAt(j);
                b = output[i].charAt(j + 1);
                if ((a == 'W' && b == 'B')) {
                    if (outputV[j] == 'B' || outputV[j + 1] == 'B')
                        return new String[0];
                    outputV[j] = '?';
                    outputV[j + 1] = '?';
                } else if (a == 'B' && b == 'B') {
                    char t = outputV[j];
                    outputV[j] = outputV[j + 1];
                    outputV[j + 1] = t;
                } else if (a == 'B' && b == 'W') {
                    if (outputV[j] == 'W' || outputV[j + 1] == 'W')
                        return new String[0];
                    outputV[j] = '?';
                    outputV[j + 1] = '?';
                }
            }
            for (int j = 0; j < column; j++)
                if (outputV[j] == '?')
                    outputV[j] = 'B';
            output[i + 1] = String.valueOf(outputV);
        }
        return output;
    }

    public String simulateAlgorithm(String rowAction, String current) {


        char[] result = current.toCharArray();
        for (int i = 0; i < rowAction.length() - 1; i++) {
            char A = rowAction.charAt(i);
            char B = rowAction.charAt(i + 1);
            if (A == 'W' && B == 'W') {

            } else if (A == 'W' && B == 'B') {
                result[i] = result[i + 1] = 'W';
            } else if (A == 'B' && B == 'W') {
                result[i] = result[i + 1] = 'B';
            } else {
                char temp = result[i];
                result[i] = result[i + 1];
                result[i + 1] = temp;
            }
        }
        return String.valueOf(result);
    }

    public String[] makeProgram(String[] output) {
        int len = output.length;
        int w = output[0].length();
        for (int i = len - 1; i > 0; i--) {
            int j = 0;
            for (; j < (1 << w); j++) {
                char[] possibleSet = new char[w];
                for (int k = 0; k < w; k++) {
                    if ((j & (1 << k)) > 0)
                        possibleSet[w - k - 1] = 'W';
                    else
                        possibleSet[w - k - 1] = 'B';
                }
                String possibleString = String.valueOf(possibleSet);
                String getAnswer = simulateAlgorithm(output[i - 1], possibleString);
                if (getAnswer.equals(output[i])) {
                    output[i] = possibleString;
                    break;
                }
            }
            if (j == (1 << w))
                return new String[0];
        }
        return output;
    }

    public static void main(String[] args) {
        System.out.println((1 << 2));

    }
}



package Manager;

import java.util.Scanner;


public class Validate {
    private static final Scanner sc = new Scanner(System.in);
    private static final Scanner scStr = new Scanner(System.in);
    private static final String VALID_PHONE = "^[0-9]{10}$";
    
    public static int checkInputLimited(int min, int max) {
        while (true) {
            try {
                int result = sc.nextInt();
                if (result < min || result > max) {
                    throw new NumberFormatException();
                }
                return result;
            } catch (NumberFormatException e) {
                System.err.println("Please enter " + min + " to " + max + "!");
            }
        }
    }
    protected static String checkInputString() {
        while (true) {
            try {
                String result = scStr.nextLine();
                if (result.isEmpty()) {
                    throw new NullPointerException();
                }
                return result;
            } catch (NullPointerException n) {
                System.out.print("Enter again: ");
                System.out.println("Please input string!");
            }
        }
    }
    protected static int checkInputInt() {
        while (true) {
            try {
                int result = Integer.parseInt(checkInputString());
                return result;
            } catch (NumberFormatException n) {
                System.out.println("Enter again: ");
                System.err.println("Please input number");
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
    protected static double checkInputDouble() {
        while (true) {
            try {
                double result = sc.nextDouble();
                return result;
            } catch (NumberFormatException n) {
                System.out.print("Enter again: ");
                System.err.println("Please input number!");
            }
        }
    }
    protected static int checkInputSold(int quantity) {
        while (true) {
            try {
                int result = checkInputInt();
                if (result > quantity) {
                    throw new NumberFormatException();
                }
                return result;
            } catch (NumberFormatException n) {
                System.err.println("sold ≤ quantity");
                System.out.print("Enter again: ");
            }
        }
    }
    protected static String checkInputPhone() {
        while (true) {
            try {
                String result = checkInputString();
                if (!result.matches(VALID_PHONE)) {
                    throw new NumberFormatException();
                }
                return result;
            } catch (NumberFormatException e) {
                System.err.println("Enter 10-digit please!");
                System.out.println("Enter again: ");
            }
        }
    }
}

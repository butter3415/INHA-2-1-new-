package Settings;

import java.util.Scanner;

public class OwnerSetting {
    private static String owner;
    public static String getOwner() {
        return owner;
    }
    @Override
    public String toString() {
        return owner;
    }

    public static void OwnerName(){
        Scanner sc = new Scanner(System.in);
        System.out.println("오박사:  왔는가? 자네!! 아차차 자네 이름이 뭐라고 했지?");
        owner = sc.nextLine();
        System.out.println("오박사 :  아차차! " + owner + "(이)라고 했지!?!!?");
    }

}

import Trip.Adventure;

import java.util.Scanner;

public class Menu {
    static Adventure adventure = new Adventure();

    public static void menu() {
        System.out.println("[  1. 모험하기  ::  2. 체육관 도전  ::  3. 뱃지 확인  ::  4. 포켓몬 도감 펼치기  ::  5. 게임 종료  ]");
        Scanner sc = new Scanner(System.in);
        int pick = sc.nextInt();

        switch (pick){
            case 1:
                System.out.println("★☆★☆★☆★☆★☆★☆모험을 떠납니다★☆★☆★☆★☆★☆★☆");
                System.out.println("디지털 요정 : 몇 번 여행을 떠날까요? ");
                int trip = sc.nextInt();
                for(int x =0 ; x<trip ; x++)
                    adventure.WildPoAppear();
                break;
            case 2:
                System.out.println("★☆★☆★☆★☆★☆★☆체육관 관장에게 도전합니다★☆★☆★☆★☆★☆");
                break;
            case 3:
                System.out.println("★☆★☆★☆★☆★☆소유한 뱃지 목록을 확인합니다★☆★☆★☆★☆★☆");
                break;
            case 4:
                System.out.println("★☆★☆★☆★☆★☆포켓몬 도감을 펼칩니다★☆★☆★☆★☆★☆");
            case 5:
                System.out.println("종료하겠습니다^^ 정말로 종료하실 건가요?\n[ 1. 종료  ::  2. 메뉴 ]");
                int choice = sc.nextInt();
                if (choice == 1)
                    System.out.println("★★★★★★★★★★★종료합니다★★★★★★★★★★★");
                else if(choice == 2)
                    menu();
                else
                    System.out.println("잘못 눌렀네요^^ 다시 눌러주시겠어요?");
                    menu();
            }

    }
}




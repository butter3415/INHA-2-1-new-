package Trip;

import java.util.Scanner;
import Settings.*;

public class Adventure {
    ChooseMyPokemon myPo;
    Evolution evolution;
    ShowUseSkills show_Use_Skills;


    Scanner sc = new Scanner(System.in);
    String[] wildPokemon = {"라이츄","갸랴도스","팬텀","아보크","식스테일","디그다","코뿌리","라프라스"};
    String[] wildPokemonSkill = {"몸통 박치기", "돌 던지기", "바람 가르기", "근원의파동", "기가임팩트", "속임수", "냉동펀치", "자이로볼"};
    int RanNum;

    public void WildPoAppear(){
        RanNum = (int)(Math.random() * 7) + 0;

        System.out.println("\n야생 포켓몬 " + wildPokemon[RanNum]+"이/가 나타났다!!\n"+ OwnerSetting.getOwner() +" : 앗! 어떡하지?!");
        System.out.println("[ 1. 싸운다.   ::   2. 도망친다.   ::   3. 야생 포켓몬 스캔. ]");

        int fightChoice = sc.nextInt();

        switch (fightChoice){
            case 1:
                fight();
                break;
            case 2:
                Run();
                break;
            case 3:
                //야생 포켓몬 스캔
                // break;
            //System.out.println("Garbage in, Garbage out. 당신은 이 게임을 할 자격이 없습니다. ^^");
        }

    }
    public void fight(){
        show_Use_Skills.UseSkill();

        int RanSkill = (int)(Math.random() * 6 ) + 0;
        int wildPower = (int)(Math.random() * 30 ) + 50;

        System.out.println(wildPokemon[RanNum] + "이(가) " + wildPokemonSkill[RanSkill] + "을/를 시전했다!!");
        System.out.println("============================================");

        if(wildPower>= myPo.getMyPoPower()){
            System.out.println(myPo.getMyPoName()+ "이(가) "+ wildPokemon[RanNum] +"에게 [패배]했다!");
        }
        else {
            System.out.println(myPo.getMyPoName()+ "이(가) "+ wildPokemon[RanNum] +"에게 [승리]했다!");
            myPo.setExp(myPo.getExp()+10);
            if (myPo.getExp() == 30)
                evolution.Evolution_level2();
            else if (myPo.getExp() > 30)
                evolution.Evolution_level3();
        }
    }
    public void Run(){
        int wildSpeed = (int)(Math.random() * 30 ) + 70;

        if (wildSpeed <= myPo.getMyPoSpeed()){
            System.out.println("도망에 [성공]했다!");
        }
        else {
            System.out.println("도망에 [실패]했다...! 전투에 돌입한다!");
            fight();
        }
    }

    // 야생포켓몬 스캔 메서드 추가


}
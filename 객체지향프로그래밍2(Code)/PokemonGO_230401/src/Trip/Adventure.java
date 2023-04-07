package Trip;

import java.util.Scanner;
import Settings.*;

import static DataBase.DBMethod_WildPokemon.*;

public class Adventure {
    ChooseMyPokemon myPo;
    Evolution evolution;
    ShowUseSkills show_Use_Skills;


    Scanner sc = new Scanner(System.in);
    private int RanNum;

    public void setRanNum(int ranNum) {
        this.RanNum = ranNum;
    }

    public void WildPoAppear(){
        int oneRanNum = (int)(Math.random() * 20) + 1;

        setRanNum(oneRanNum);

        selectWildPokemonName(RanNum);
        System.out.println(OwnerSetting.getOwner() +" : 앗! 어떡하지?!");
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
        show_Use_Skills.ChooseSkill();

        int wildPoPower = 0;

        if (myPo.getExp() <= 20)
            wildPoPower = (int)(Math.random() * 20) + 10; // 10~30
        else if (myPo.getExp() > 20 && myPo.getExp() <= 40)
            wildPoPower = (int)(Math.random() * 30) + 31; // 31~60
        else if (myPo.getExp() > 40)
            wildPoPower = (int)(Math.random() * 15) + 61; // 61~85

        selectWildPokemonSkill(RanNum);

        System.out.println("============================================");

        if(wildPoPower >= myPo.getMyPoPower()){
            System.out.print(myPo.getMyPoName()+ "이(가) ");
            System.out.print(getWildPokemonName(RanNum));
            System.out.println("에게 [패배]했다!\n");
        }
        else {
            System.out.print(myPo.getMyPoName()+ "이(가) ");
            System.out.print(getWildPokemonName(RanNum));
            System.out.println("에게 [승리]했다!\n");

            myPo.setExp(myPo.getExp()+5);
            myPo.setMyPoPower(myPo.getMyPoPower()+5);
            myPo.setMyPoSpeed(myPo.getMyPoSpeed()+5);

            winPokemonInsertDictionary(RanNum);

            if (myPo.getExp() == 20)
                evolution.Evolution_level2();
            else if (myPo.getExp() == 40)
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
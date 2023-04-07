import java.util.List;
import java.util.Scanner;

import static DataBase.DBMethod.*;


public class Adventure {
    MyPokemon myPokemon;
    PokemonListSettings poList;
    Scanner sc = new Scanner(System.in);
    int RanNum;

    static Scanner attackScanner = new Scanner(System.in);
    public void setRanNum(int ranNum) {
        RanNum = ranNum;
    }
    public void WildPoAppear(){
        int oneRanNum = (int)(Math.random() * 20) + 1;
        setRanNum(oneRanNum);
        selectWildPokemonName(RanNum);
        System.out.println(Owner.getOwner() +" : 앗! 어떡하지?!\n============================================" );
        System.out.println("     [  1  싸운다.   ::   2  도망친다.   ]");
        int fightChoice = sc.nextInt();

        if (fightChoice == 1){
            fight();
        } else if (fightChoice == 2){
            Run();
        } else {
            System.out.println("Garbage in, Garbage out. 당신은 이 게임을 할 자격이 없습니다. ^^");
        }
    }
    public void fight(){
        int wildPower = (int)(Math.random() * 30) + 60;

        AttackAdventure();
        selectWildPokemonSkill(RanNum);
        System.out.println("============================================");

        if(wildPower>=myPokemon.getMyPoPower()){
            System.out.print(myPokemon.getMyPoName()+ "이(가) ");
            System.out.print(getWildPokemonName(RanNum));
            System.out.println("에게 [패배]했다!");
        }
        else {
            System.out.print(myPokemon.getMyPoName()+ "이(가) ");
            System.out.print(getWildPokemonName(RanNum));
            System.out.println("에게 [승리]했다!");
            MyPokemon.setExp(myPokemon.getExp()+10);
            winPokemonInsertDictionary(RanNum);
           //ㅇㅇ myPokemon.getExp() == 30 ? Evolution_level2() : Evolution_level3();
            if ((myPokemon.getExp() == 30)) {
                Evolution_level2();
            } else { Evolution_level3();}
        }
    }
    public void AttackAdventure() {
        List<String> skills_level1 = poList.getPoList_level1().get(myPokemon.getChoice()).getSkills();
        List<String> skills_level2 = poList.getPoList_level2().get(myPokemon.getChoice()).getSkills();
        List<String> skills_level3 = poList.getPoList_level3().get(myPokemon.getChoice()).getSkills();
        System.out.println("============================================\n어떤 공격을 할 것인가?!");


        if (myPokemon.getExp() < 30) {
            int i = 1;
            for (String skill : skills_level1) {
                System.out.println(i + " : " + skill);
                i++;
            }
            int skillChoice = attackScanner.nextInt() - 1;
            System.out.println("============================================");
            System.out.println(myPokemon.getMyPoName() + " 이/가 " + skills_level1.get(skillChoice) + "을(를) 시전했다!");
        }
        else if (myPokemon.getExp() < 60 && MyPokemon.getExp() >= 30) {
            int v = 1;
            for (String skill : skills_level2) {
                System.out.println(v + " : " + skill);
                v++;
            }
            int skillChoice = attackScanner.nextInt() - 1;
            System.out.println("============================================");
            System.out.println(myPokemon.getMyPoName() + " 이/가 " + skills_level2.get(skillChoice) + "을(를) 시전했다!");
        }
        else if (myPokemon.getExp() >= 60) {
            int o = 1;
            for (String skill : skills_level3) {
                System.out.println(o + " : " + skill);
                o++;
            }
            int skillChoice = attackScanner.nextInt() - 1;
            System.out.println("============================================");
            System.out.println(myPokemon.getMyPoName() + " 이/가 " + skills_level3.get(skillChoice) + "을(를) 시전했다!");
        }
    }
    public void Run(){
        int wildSpeed = (int)(Math.random() * 30 ) + 70;

        if (wildSpeed <= myPokemon.getMyPoSpeed()){
            System.out.println("도망에 [성공]했다!");
        } else {
            System.out.println("도망에 [실패]했다...! 전투에 돌입한다!");
            fight();
        }
    }
    public void Evolution_level2(){
        System.out.println("★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆\n"+MyPokemon.getMyPoName()+" : 어?!?!? 어어!?!!! "+ Owner.getOwner()+"! 내 몸이 이상해!!\n★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆\n★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
        myPokemon.setMyPoName(poList.getPoList_level2().get(myPokemon.getChoice()).getName());
        myPokemon.setMyPoPower(poList.getPoList_level2().get(myPokemon.getChoice()).getPower());
        myPokemon.setMyPoSpeed(poList.getPoList_level2().get(myPokemon.getChoice()).getSpeed());
        System.out.println("★"+MyPokemon.getMyPoName()+"★"+"로 진화하였다!!!");
        System.out.println("★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
    }
    public void Evolution_level3(){
        System.out.println("★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆\n어?!?!? 어어!?!!!\n"+myPokemon.getMyPoName()+" : "+ Owner.getOwner()+"! 내 몸이 이상해!!!!!\n★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆\n★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
        myPokemon.setMyPoName(poList.getPoList_level3().get(MyPokemon.getChoice()).getName());
        myPokemon.setMyPoPower(poList.getPoList_level3().get(MyPokemon.getChoice()).getPower());
        myPokemon.setMyPoSpeed(poList.getPoList_level3().get(MyPokemon.getChoice()).getSpeed());
        System.out.println("★"+myPokemon.getMyPoName()+"★"+"로 진화하였다!!!\n★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
    }

    // 야생 포켓몬, 진화, 어택 분리

}
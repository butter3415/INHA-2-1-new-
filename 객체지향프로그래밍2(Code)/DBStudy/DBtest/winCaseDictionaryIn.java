package DBtest;

import static DBtest.DBMethod_Gym.*;
import static DBtest.DBMethod_WildPokemon.*;

public class winCaseDictionaryIn{
    private int wildRan = (int)(Math.random() * 20) + 1;


    void fight(){
        int wildUseRanNum = wildRan;
        selectWildPokemonName(wildUseRanNum);
        int myPokemonPower = 90;
        int wildPokemonPower = (int)(Math.random() * 20) + 80;


        if (myPokemonPower > wildPokemonPower){
            System.out.println("내 포켓몬 승리");
            winPokemonInsertDictionary(wildUseRanNum);
        } else {
            System.out.println("내 포켓몬 패배");
        }
    }

    void gymFight(){
        int gymNum = (int)(Math.random() * 2) + 1;
        System.out.println(gymNum);

        selectGymPokemonSkill(gymNum);
        winGymInsertBadge(gymNum);
        System.out.println(getGymPokemonName(gymNum));
        System.out.println(getGymMasterName(gymNum));
        System.out.println(gymPokemonPower);
        System.out.println(getGymName(gymNum));
    }

    public winCaseDictionaryIn() {
        try {
            fight();
           gymFight();

        } catch(Exception e){
            e.printStackTrace();
        }
    }


}

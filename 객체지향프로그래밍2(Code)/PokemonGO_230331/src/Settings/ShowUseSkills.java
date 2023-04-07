package Settings;

import java.util.List;
import java.util.Scanner;

public class ShowUseSkills {
    static ChooseMyPokemon myPo;
    static PokemonListSetting PoList;
    static Scanner attackScanner = new Scanner(System.in);

    public static void UseSkill() {
        List<String> skills_level1 = PoList.getPoList_level1().get(myPo.getChoice()).getSkills();
        List<String> skills_level2 = PoList.getPoList_level2().get(myPo.getChoice()).getSkills();
        List<String> skills_level3 = PoList.getPoList_level3().get(myPo.getChoice()).getSkills();
        System.out.println("어떤 공격을 할 것인가?!");

        if (myPo.getExp() < 30) {
            ChooseASkill(skills_level1);
        }
        else if (myPo.getExp() < 60 && myPo.getExp() >= 30) {
            ChooseASkill(skills_level2);
        }
        else //myPo.getExp() >= 60)
            ChooseASkill(skills_level3);
    }

    public static void ChooseASkill(List<String> skills) {
        int indexNum = 1;
        for (String skill : skills) {
            System.out.println(indexNum + " : " + skill);
            indexNum++;
        }
        int skillChoice = attackScanner.nextInt()-1;
        System.out.println("============================================");
        System.out.println(myPo.getMyPoName() + " 이(가) " + skills.get(skillChoice) + "을(를) 시전했다!");
    }
}

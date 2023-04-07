package Settings;

public class Evolution {
    static ChooseMyPokemon myPo;
    static PokemonListSetting poList;
    public static void Evolution_level2(){
        System.out.println(myPo.getMyPoName()+" : 어?!?!? 어어!?!!! "+ OwnerSetting.getOwner()+"! 내 몸이 이상해!!\n★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
        myPo.setMyPoName(poList.getPoList_level2().get(myPo.getChoice()).getName());
        myPo.setMyPoPower(myPo.getMyPoPower());
        myPo.setMyPoSpeed(myPo.getMyPoSpeed());
        System.out.println("★"+ myPo.getMyPoName()+"★"+"로 진화하였다!!!");
        System.out.println("★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
    }
    public static void Evolution_level3(){
        System.out.println("어?!?!? 어어!?!!!\n"+ myPo.getMyPoName()+" : "+ OwnerSetting.getOwner()+"! 내 몸이 이상해!!!!!\n★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
        myPo.setMyPoName(poList.getPoList_level3().get(myPo.getChoice()).getName());
        myPo.setMyPoPower(myPo.getMyPoPower());
        myPo.setMyPoSpeed(myPo.getMyPoSpeed());
        System.out.println("★"+ myPo.getMyPoName()+"★"+"로 진화하였다!!!\n★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
    }
}

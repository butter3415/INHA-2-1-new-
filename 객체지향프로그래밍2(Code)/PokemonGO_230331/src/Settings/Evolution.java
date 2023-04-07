package Settings;

public class Evolution {
    ChooseMyPokemon myPo;
    PokemonListSetting poList;
    public void Evolution_level2(){
        System.out.println(myPo.getMyPoName()+" : 어?!?!? 어어!?!!! "+ OwnerSetting.getOwner()+"! 내 몸이 이상해!!\n★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
        myPo.setMyPoName(poList.getPoList_level2().get(myPo.getChoice()).getName());
        myPo.setMyPoPower(poList.getPoList_level2().get(myPo.getChoice()).getPower());
        myPo.setMyPoSpeed(poList.getPoList_level2().get(myPo.getChoice()).getSpeed());
        System.out.println("★"+ myPo.getMyPoName()+"★"+"로 진화하였다!!!");
        System.out.println("★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
    }
    public void Evolution_level3(){
        System.out.println("어?!?!? 어어!?!!!\n"+ myPo.getMyPoName()+" : "+ OwnerSetting.getOwner()+"! 내 몸이 이상해!!!!!\n★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
        myPo.setMyPoName(poList.getPoList_level3().get(myPo.getChoice()).getName());
        myPo.setMyPoPower(poList.getPoList_level3().get(myPo.getChoice()).getPower());
        myPo.setMyPoSpeed(poList.getPoList_level3().get(myPo.getChoice()).getSpeed());
        System.out.println("★"+ myPo.getMyPoName()+"★"+"로 진화하였다!!!\n★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
    }
}

import java.util.Scanner;
/*
MyPokemon
게임을 함께할 Pokemon을 고르는 클래스
 */
class MyPokemon{
    private static String MyPoName;
    private static int MyPoPower;
    private static int MyPoSpeed;

    private static int choice;

    private static int exp;

    public static int getExp() {
        return exp;
    }

    public static void setExp(int exp) {
        MyPokemon.exp = exp;
    }

    public static String getMyPoName() {
        return MyPoName;
    }

    public static void setMyPoName(String myPoName) {
        MyPoName = myPoName;
    }

    public static int getMyPoPower() {
        return MyPoPower;
    }

    public static void setMyPoPower(int myPoPower) {
        MyPoPower = myPoPower;
    }

    public static int getMyPoSpeed() {
        return MyPoSpeed;
    }

    public static void setMyPoSpeed(int myPoSpeed) {
        MyPoSpeed = myPoSpeed;
    }

    public static int getChoice() {
        return choice;
    }

    static Scanner choiceScanner = new Scanner(System.in);


    public void MyPokemonChoice(){
        System.out.println("오박사 :  허허허! 참! 시간이 벌써 이렇게! 자자, 초보 트레이너라고 걱정말게나~\n오박사 :  여기 자네와 같은 초보 트레이너들을 위한 포켓몬들을 준비했다네!\n오박사 :  누구와 함께 여행을 떠나고 싶은가!?!?\n============================================");
        System.out.println("[  1  파이리  ::   2  꼬부기   ::  3 이상해씨   ]");
        this.choice = choiceScanner.nextInt();
    }
    public void StartPokemon() {
        PokemonListSettings.Pokemon_settings();
        System.out.println("오박사 :  자네와 함께할 친구는 " + PokemonListSettings.getPoList_level1().get(this.choice).getName() + "이다!");
        System.out.println("오박사 :  자! 즐거운 여행을 하고오거라!");
        setMyPoName(PokemonListSettings.getPoList_level1().get(this.choice).getName());
        setMyPoPower(PokemonListSettings.getPoList_level1().get(this.choice).getPower());
        setMyPoSpeed(PokemonListSettings.getPoList_level1().get(this.choice).getSpeed());
        System.out.println("그렇게 " + Owner.getOwner() + "는(은) " + getMyPoName() + "와 함께 여행을 떠나게 되는데...!!!");
        System.out.println("☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★");
    }

}

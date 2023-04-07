package DataBase;

import java.sql.ResultSet;

public class DBMethod_Gym extends DBManager{
    // =============================================================================================================================================
    // <체육관 관련 함수>
    // - [winGymInsertBadge(int GymNum)] 체육관 관장과의 대결에서 승리 시 뱃지 추가 함수
    // - [selectGymPokemonSkill(int GymNum)] 체육관 관장과 대결 시 "eee 관장 포켓몬 000이 ㅁㅁㅁ을 시전했다!" 문구 표현 함수
    // - [getGymName(int GymNum)] 체육관 이름 불러오기
    // - [getGymMasterName(int GymNum)] 체육관 관장 이름 불러오기
    // - [getGymPokemonName(int GymNum)] 체육관 관장 포켓몬 이름 불러오기

    // ---------------------------------------------------------------------------------------------------------------------------------------------

    // DB 데이터 바꾸기(UPDATE)
    // 체육관 관장과의 대결에서 승리 시 뱃지 추가 함수
    // 체육관 id 매개변수 입력 필요 - 입장한 체육관 번호(레벨)
    static void winGymInsertBadge(int GymNum){
        try{
            stm.executeUpdate("UPDATE pokemondbstudy.badge " +
                    "SET " +
                    "`badge_id` = " + GymNum + ", " +
                    "`GymName` = (SELECT `GymName` FROM pokemonGO_DB.gym where `id` = " + GymNum +  ")," +
                    "`badgeName` = (SELECT `GymBadge` FROM pokemonGO_DB.gym where `id` = " + GymNum + ")" +
                    "WHERE id = " + GymNum);

        } catch (Exception e){
            e.printStackTrace();
        }
    }

    // ---------------------------------------------------------------------------------------------------------------------------------------------

    // 체육관 관장과 대결 시 "eee 관장 포켓몬 000이 ㅁㅁㅁ을 시전했다!" 문구 표현 함수
    // 체육관 관장 포켓몬 스킬 힘 저장 -> 게이지 떨어뜨릴때 사용 위함
    // * 스킬은 랜덤 출력
    static int gymPokemonPower;
    public static void selectGymPokemonSkill(int GymNum){
        try{

            int wildSkillNum = (int)(Math.random() * 3) + 3;

            ResultSet rs = stm.executeQuery(
                    "SELECT GymMasterName, GymMasterPokemon, GymPokemonSkill1, GymPokemonSkill2, GymPokemonSkill3,  Skill1_Power, Skill2_Power, Skill3_Power  \n" +
                            "FROM GYM\n" +
                            "WHERE GYM.id = " + GymNum);

            while (rs.next()) {
                System.out.println(rs.getString(1) + " 관장의 포켓몬 " + rs.getString(2) + "이(가) " + rs.getString(wildSkillNum) + "을(를) 시전했다!");
                System.out.println(rs.getString(wildSkillNum) + " 스킬 공격력 : " + rs.getString(wildSkillNum + 3));
                gymPokemonPower = Integer.parseInt(rs.getString(wildSkillNum + 3));
            }
        } catch(Exception e){
            e.printStackTrace();
        }
    }

    // ---------------------------------------------------------------------------------------------------------------------------------------------
    // 체육관 이름 불러오기
    // SJGYM - 'SJGYM' 불러오기 / TGGYM - 'TGGYM' 불러오기
    // 다양하게 쓰일 듯 싶습니다.

    static String GymName;

    public static String getGymName(int GymNum){
        try{
            ResultSet rs = stm.executeQuery("SELECT GymName FROM `GYM` WHERE id = " + GymNum);

            while(rs.next()) {
                GymName = rs.getString(1);
            }
        } catch(Exception e){
            e.printStackTrace();
        }
        return GymName;

    }

    // ---------------------------------------------------------------------------------------------------------------------------------------------
    // 체육관 관장 이름 불러오기
    // SJGYM - '차상진' 불러오기 / TGGYM - '김태간' 불러오기
    // 다양하게 쓰일 듯 싶습니다.

    static String GymMasterName;

    public static String getGymMasterName(int GymNum){
        try{
            ResultSet rs = stm.executeQuery("SELECT GymMasterName FROM `GYM` WHERE id = " + GymNum);

            while(rs.next()) {
                GymMasterName = rs.getString(1);
            }
        } catch(Exception e){
            e.printStackTrace();
        }
        return GymMasterName;

    }

    // ---------------------------------------------------------------------------------------------------------------------------------------------
    // 체육관 관장 포켓몬 이름 불러오기
    // SJGYM - '형사구스' 불러오기 / TGGYM - '프리져' 불러오기
    // 다양하게 쓰일 듯 싶습니다.

    static String GymPokemonName;

    public static String getGymPokemonName(int GymNum){
        try{
            ResultSet rs = stm.executeQuery("SELECT GymMasterPokemon FROM `GYM` WHERE id = " + GymNum);

            while(rs.next()) {
                GymPokemonName = rs.getString(1);
            }
        } catch(Exception e){
            e.printStackTrace();
        }
        return GymPokemonName;

    }




}

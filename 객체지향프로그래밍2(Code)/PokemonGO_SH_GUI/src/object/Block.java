package object;

public class Block {
	private int[] min = new int[2];
	private int[] max = new int[2];	
	
	private int width;
	private int height;
	
	public Block(int x, int y, int width, int height) {
		min[0] = x;
		min[1] = y;
		
		max[0] = x + width;
		max[1] = y + width;
		
		this.width = width;
		this.height = height;		
	}
	
	public int getMinX() {return min[0];}	
	public int getMinY() {return min[1];}	
	
	public int getMaxX() {return max[0];}	
	public int getMaxY() {return max[1];}
	
	public int getWidth() {return width;}
	public int getHeight() {return height;}
	
	public void setX(int x) {
		min[0] = x;				
		max[0] = x + width;		
	}
	
	public void setY(int y) {
		min[1] = y;				
		max[1] = y + width;		
	}

	public boolean isCollisionRects(Block r) {
		if ((this.getMaxX() < r.getMinX() || this.getMinX() > r.getMaxX()) ||
			(this.getMaxY() < r.getMinY() || this.getMinY() > r.getMaxY())) 
			return false;		
		else
			return true;
	}
}

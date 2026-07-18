class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int aa=(ax2-ax1)*(ay2-ay1);
        int ab=(bx2-bx1)*(by2-by1);
        int leftx=max(ax1,bx1);
        int rightx=min(ax2,bx2);
        int bottomy=max(ay1,by1);
        int topy=min(ay2,by2);
        int width=rightx-leftx;
        int height=topy-bottomy;
        if(width<0 || height<0){
            return aa+ab;
        }
        return aa+ab-width*height;
    }
};
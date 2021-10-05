
package Entity;

public class Orders implements Comparable<Orders>{
    private String pcode;
    private String ccode;
    private int quantity;

    public Orders() {
    }

    public Orders(String pcode, String ccode, int quantity) {
        this.pcode = pcode;
        this.ccode = ccode;
        this.quantity = quantity;
    }

    public String getPcode() {
        return pcode;
    }

    public void setPcode(String pcode) {
        this.pcode = pcode;
    }

    public String getCcode() {
        return ccode;
    }

    public void setCcode(String ccode) {
        this.ccode = ccode;
    }

    public int getQuantity() {
        return quantity;
    }

    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }

    @Override
    public String toString() {
        return "Orders{" + "pcode=" + pcode + ", ccode=" + ccode + ", quantity=" + quantity + '}';
    }
    
    @Override
    public int compareTo(Orders t) {
        if (t.getPcode().compareTo(pcode) != 0){
            return t.getPcode().compareTo(pcode);
        }else{
            return t.getCcode().compareTo(ccode);
        }
    }
}

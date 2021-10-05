package H204;

import java.util.ArrayList;
import java.util.List;

public class Account {

    private Client c;
    private List<Transaction> list = new ArrayList<Transaction>();

    public Account(Client c) {
        this.c = c;
    }

    public void add(Transaction t) {
        list.add(t);
    }

    public boolean process(Transaction t) {
        return t.isApproved();
    }

    public Client getCustomer() {
        return c;
    }

    public List<Transaction> getList() {
        return list;
    }
}
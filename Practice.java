package Practice;

class Employee implements Workable {

    private int empId;
    private String name;
    private double salary;

    public Employee(int empId, String name, double salary) {
        this.empId = empId;
        this.name = name;
        this.salary = salary;
    }

    public int getEmpId() {
        return empId;
    }

    public void setEmpId(int empId) {
        this.empId = empId;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }

    public void displayInfo() {
        System.out.println("Employee ID: " + empId + ", Name: " + name);
    }

    public void displaySalary() {
        System.out.println("Salary: " + salary);
    }

    public void displaySalary(String date) {
        System.out.println("Salary on " + date + " is " + salary);
    }

    public void work() {
        System.out.println(name + " is working.");
    }
}

class Manager extends Employee {

    private double bonus;

    public Manager(int empId, String name, double salary, double bonus) {
        super(empId, name, salary);
        this.bonus = bonus;
    }

    public double getBonus() {
        return bonus;
    }

    public void setBonus(double bonus) {
        this.bonus = bonus;
    }

    public void displaySalary() {
        System.out.println("Total Salary (including bonus) is " + (getSalary() + bonus));
    }
}

interface Workable {

    void work();
}

public class Main {

    public static void main(String[] args) {

        Employee emp = new Employee(101, "John Doe", 50000);
        emp.displayInfo();
        emp.displaySalary();
        emp.displaySalary("March 2025");
        emp.work();

        System.out.println();

        Manager mgr = new Manager(102, "Alice Smith", 70000, 10000);
        mgr.displayInfo();
        mgr.displaySalary();
        mgr.work();
    }
}

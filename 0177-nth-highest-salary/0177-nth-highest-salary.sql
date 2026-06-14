CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN

  RETURN (
      # Write your MySQL query statement below.
      SELECT salary
      FROM(
        SELECT salary,
        dense_Rank() over ( order by salary desc)as rnk from Employee
      )t 
      where rnk = N
      LIMIT 1
  );
END
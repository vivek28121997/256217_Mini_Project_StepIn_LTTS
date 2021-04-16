# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |To check for the start function call|Start (s)|Washing machine is ON|Washing machine is ON|Requirement based |
|  H_02       |To check for the Washmode function call| Full-wash(f)|Full-wash is active|Full-wash is active|Scenario based |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |To check for system parameter to be in range|  200,20,1,1,1|Systems checks: Pass|Systems checks: Pass|Scenario based |
|  L_02       |To check for system parameter to be in range| 100,10,0,0,0|Systems checks: Pass|Systems checks: Pass|Boundary based  |

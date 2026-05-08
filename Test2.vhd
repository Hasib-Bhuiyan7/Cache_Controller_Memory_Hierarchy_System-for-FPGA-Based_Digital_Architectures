--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   00:02:42 10/30/2025
-- Design Name:   
-- Module Name:   /home/student2/ahbhuiya/Downloads/Cache/Test2.vhd
-- Project Name:  Cache
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: CacheController
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Test2 IS
END Test2;
 
ARCHITECTURE behavior OF Test2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CacheController
    PORT(
         clk : IN  std_logic;
         ADDR : OUT  std_logic_vector(15 downto 0);
         cacheAddr : OUT  std_logic_vector(7 downto 0);
         CS : OUT  std_logic;
         MEMSTRB : OUT  std_logic;
         RDY : OUT  std_logic;
         WR_RD : OUT  std_logic;
         DOUT : OUT  std_logic_vector(7 downto 0);
         sAddra : OUT  std_logic_vector(7 downto 0);
         sDina : OUT  std_logic_vector(7 downto 0);
         sDouta : OUT  std_logic_vector(7 downto 0);
         sD_Addra : OUT  std_logic_vector(15 downto 0);
         sD_Dina : OUT  std_logic_vector(7 downto 0);
         sD_Douta : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';

 	--Outputs
   signal ADDR : std_logic_vector(15 downto 0);
   signal cacheAddr : std_logic_vector(7 downto 0);
   signal CS : std_logic;
   signal MEMSTRB : std_logic;
   signal RDY : std_logic;
   signal WR_RD : std_logic;
   signal DOUT : std_logic_vector(7 downto 0);
   signal sAddra : std_logic_vector(7 downto 0);
   signal sDina : std_logic_vector(7 downto 0);
   signal sDouta : std_logic_vector(7 downto 0);
   signal sD_Addra : std_logic_vector(15 downto 0);
   signal sD_Dina : std_logic_vector(7 downto 0);
   signal sD_Douta : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CacheController PORT MAP (
          clk => clk,
          ADDR => ADDR,
          cacheAddr => cacheAddr,
          CS => CS,
          MEMSTRB => MEMSTRB,
          RDY => RDY,
          WR_RD => WR_RD,
          DOUT => DOUT,
          sAddra => sAddra,
          sDina => sDina,
          sDouta => sDouta,
          sD_Addra => sD_Addra,
          sD_Dina => sD_Dina,
          sD_Douta => sD_Douta
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;

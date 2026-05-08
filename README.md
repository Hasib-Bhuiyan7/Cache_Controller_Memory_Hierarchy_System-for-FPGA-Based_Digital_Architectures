\# Cache Controller Memory Hierarchy System for FPGA-Based Digital Architectures



This project implements a complete cache controller and memory hierarchy system using VHDL within the Xilinx ISE CAD environment. Developed for the COE758 – Digital Systems Engineering course, the project focuses on the design, implementation, simulation, and hardware validation of a simplified processor memory hierarchy consisting of a CPU interface, SRAM cache memory, SDRAM main memory, and their corresponding controllers. The overall objective of the project was to understand how cache controllers function, how memory hierarchy improves system efficiency, and how different memory subsystems communicate and synchronize to satisfy CPU read/write requests while minimizing memory access latency.



The design models a realistic cache hierarchy architecture where SRAM acts as a fast intermediate memory layer between the CPU and SDRAM main memory. Since increasing SRAM capacity becomes expensive in digital system design, the cache controller dynamically manages block replacement, write-back operations, and memory transfers to efficiently utilize limited cache resources while preserving high-speed CPU access. The project demonstrates the practical operation of cache systems commonly found in modern computer architectures and embedded FPGA systems.



\---



\# System Architecture and Design



The implemented system is composed of several interconnected digital subsystems:



\* CPU Interface

\* Cache Controller

\* SRAM Cache Memory

\* SDRAM Controller

\* SDRAM Main Memory



The SRAM cache memory was organized into:



\* 8 memory blocks

\* 32 words per block

\* 8 bits per word



The cache controller acts as the central control logic responsible for:



\* Receiving CPU memory instructions

\* Performing hit/miss determination

\* Controlling cache reads and writes

\* Managing SDRAM communication

\* Performing block replacement

\* Handling dirty-bit write-back operations

\* Synchronizing memory transfers between SRAM and SDRAM



The project architecture was implemented using:



\* VHDL hardware description language

\* Finite state machine (FSM) control logic

\* FPGA-based synthesis and simulation tools

\* Xilinx ISE CAD environment

\* ISim functional simulation

\* ChipScope hardware analysis



\---



\# Cache Controller Operation



The cache controller was designed around four major behavioral memory cases:



\### 1. Hit-Read



When the requested memory address already exists in cache memory and the CPU performs a read operation, the cache immediately provides the required data with minimal latency.



\### 2. Hit-Write



When the requested block exists in cache memory and the CPU performs a write operation, the cache directly updates the SRAM block and sets the dirty bit accordingly.



\### 3. Clean Miss (Dirty Bit = 0)



If the requested address is not present in cache and the existing cache block has not been modified:



\* The cache controller fetches the required block from SDRAM

\* The new block replaces the existing cache block

\* The CPU operation executes afterward



\### 4. Dirty Miss (Dirty Bit = 1)



If the requested cache block was modified previously:



\* The cache controller first writes back the modified block to SDRAM

\* A block replacement operation is performed

\* The requested block is loaded from SDRAM

\* The CPU instruction is finally executed



The project also implemented:



\* Valid bit management

\* Tag comparison logic

\* Block indexing

\* Offset-based word selection

\* Modular memory transfer sequencing



\---



\# Finite State Machine Design



The cache controller was implemented using a modular five-state finite state machine architecture.



The primary states include:



\* READY State

\* HIT State

\* CLEAN MISS State

\* DIRTY MISS State

\* IDLE State



The READY state initializes every CPU memory transaction by:



\* Loading memory instruction signals

\* Determining hit/miss conditions

\* Preparing SRAM and SDRAM communication



The DIRTY MISS state performs:



\* Cache block write-back to SDRAM

\* Sequential block transfer operations

\* SDRAM synchronization using strobe signals



The CLEAN MISS state handles:



\* Block replacement operations

\* SDRAM-to-cache transfers

\* Cache loading and synchronization



The HIT state performs:



\* Direct cache read/write operations

\* Final CPU memory access



The IDLE state signals:



\* CPU\_READY condition

\* Completion of the memory transaction



One of the major design strengths of the project is the modular dependency between states. Rather than independently implementing repeated memory operations, the state machine reuses common functionality by chaining operations together. For example:



\* DIRTY MISS transitions into CLEAN MISS

\* CLEAN MISS transitions into HIT



This modular structure reduced repeated logic and improved controller organization.



\---



\# Memory Transfer and Timing Analysis



The project heavily analyzed timing behavior and memory transfer performance using ISim waveform simulations and ChipScope hardware debugging tools.



The implemented controller demonstrated:



\* Sequential block transfers

\* SDRAM strobe synchronization

\* Address decoding

\* Cache line replacement

\* Write-back sequencing



During a DIRTY MISS operation:



\* 64 total clock cycles were used

\* Every even cycle asserted the SDRAM strobe signal

\* 32 individual 32-bit words were transferred back to SDRAM

\* Full cache block write-back was completed before replacement



During CLEAN MISS:



\* 32-word blocks were fetched from SDRAM

\* Entire cache lines were overwritten

\* Main memory data was transferred directly into SRAM cache



The simulations also demonstrated:



\* Tag, index, and offset decoding

\* Cache block addressing

\* Data synchronization between SRAM and SDRAM controllers



Measured timing parameters included:



\* Hit/Miss determination time

\* Data access time

\* Block replacement delay

\* Cache hit latency

\* Clean miss penalty

\* Dirty miss penalty



The project showed that direct cache access operations are significantly faster than SDRAM accesses, reinforcing the importance of cache hierarchy systems in digital architectures.



\---



\# Simulation and FPGA Verification



The complete design was functionally verified using:



\* ISim waveform simulations

\* ChipScope hardware analysis

\* Internal Logic Analyzer (ILA)

\* Internal Controller (ICON)



Waveforms demonstrated:



\* Correct state transitions

\* Proper cache hit/miss behavior

\* Accurate SDRAM synchronization

\* Correct read/write sequencing

\* Successful cache line replacement

\* Functional dirty-bit handling



The timing diagrams and simulation results validated that:



\* The cache controller behaved exactly according to specification

\* Memory transfers occurred correctly across all behavioral cases

\* State transitions matched theoretical cache hierarchy behavior

\* CPU requests were executed reliably and efficiently



\---



\# Key Technical Concepts and Skills Demonstrated



\* Cache controller architecture

\* Memory hierarchy systems

\* SRAM and SDRAM interfacing

\* VHDL digital system design

\* FPGA-based implementation

\* Finite state machine (FSM) design

\* Cache hit/miss analysis

\* Dirty-bit and valid-bit management

\* Block replacement algorithms

\* Timing and waveform analysis

\* ISim simulation environment

\* ChipScope debugging and verification

\* Hardware synchronization logic

\* Modular controller design

\* CPU-memory communication systems



\---



\# Conclusion



This project successfully demonstrates the implementation of a functional cache controller and memory hierarchy system using FPGA-based digital design methodologies. Through the interaction of the CPU, SRAM cache, SDRAM main memory, and their controllers, the system accurately models practical cache behavior found in modern computer architectures.



The implemented controller correctly performs:



\* Hit-Read operations

\* Hit-Write operations

\* Clean Miss handling

\* Dirty Miss write-back and replacement



while maintaining synchronized and modular state transitions throughout the system.



The simulation waveforms, timing analysis, and hardware verification collectively confirm that the cache controller behaves according to theoretical cache hierarchy principles while accurately reflecting real-world memory management operations used in modern digital systems and embedded architectures.




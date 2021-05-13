/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 1830:  /* sync_xorsi */
    case 1829:  /* sync_iorsi */
    case 1828:  /* sync_andsi */
    case 1827:  /* sync_xorhi */
    case 1826:  /* sync_iorhi */
    case 1825:  /* sync_andhi */
    case 1824:  /* sync_xorqi */
    case 1823:  /* sync_iorqi */
    case 1822:  /* sync_andqi */
    case 1821:  /* sync_subsi */
    case 1820:  /* sync_subhi */
    case 1819:  /* sync_subqi */
    case 1818:  /* sync_addsi */
    case 1817:  /* sync_addhi */
    case 1816:  /* sync_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1815:  /* sync_lock_test_and_setsi */
    case 1814:  /* sync_lock_test_and_sethi */
    case 1813:  /* sync_lock_test_and_setqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1812:  /* sync_old_addsi */
    case 1811:  /* sync_old_addhi */
    case 1810:  /* sync_old_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 1809:  /* *sync_double_compare_and_swapdi_pic */
    case 1808:  /* sync_double_compare_and_swapdi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 3);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 2);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 1);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[6] = 1;
      break;

    case 1807:  /* *sync_compare_and_swapsi */
    case 1806:  /* *sync_compare_and_swaphi */
    case 1805:  /* *sync_compare_and_swapqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0, 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 1;
      break;

    case 1804:  /* memory_barrier_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1791:  /* avx_maskstorepd256 */
    case 1790:  /* avx_maskstoreps256 */
    case 1789:  /* avx_maskstorepd */
    case 1788:  /* avx_maskstoreps */
    case 1787:  /* avx_maskloadpd256 */
    case 1786:  /* avx_maskloadps256 */
    case 1785:  /* avx_maskloadpd */
    case 1784:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 1771:  /* *avx_vperm2f128v4df_nozero */
    case 1770:  /* *avx_vperm2f128v8sf_nozero */
    case 1769:  /* *avx_vperm2f128v8si_nozero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1761:  /* *avx_vpermilpv4df */
    case 1760:  /* *avx_vpermilpv8sf */
    case 1759:  /* *avx_vpermilpv2df */
    case 1758:  /* *avx_vpermilpv4sf */
    case 1757:  /* *avx_vperm_broadcast_v4df */
    case 1756:  /* *avx_vperm_broadcast_v8sf */
    case 1755:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1722:  /* xop_maskcmp_uns2v2di3 */
    case 1721:  /* xop_maskcmp_uns2v4si3 */
    case 1720:  /* xop_maskcmp_uns2v8hi3 */
    case 1719:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1708:  /* xop_vmfrczv2df2 */
    case 1707:  /* xop_vmfrczv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 1704:  /* xop_lshlv2di3 */
    case 1703:  /* xop_lshlv4si3 */
    case 1702:  /* xop_lshlv8hi3 */
    case 1701:  /* xop_lshlv16qi3 */
    case 1700:  /* xop_ashlv2di3 */
    case 1699:  /* xop_ashlv4si3 */
    case 1698:  /* xop_ashlv8hi3 */
    case 1697:  /* xop_ashlv16qi3 */
    case 1696:  /* xop_vrotlv2di3 */
    case 1695:  /* xop_vrotlv4si3 */
    case 1694:  /* xop_vrotlv8hi3 */
    case 1693:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 1684:  /* xop_pperm_pack_v8hi_v16qi */
    case 1683:  /* xop_pperm_pack_v4si_v8hi */
    case 1682:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1674:  /* xop_phaddubq */
    case 1668:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 1676:  /* xop_phadduwq */
    case 1673:  /* xop_phaddubd */
    case 1670:  /* xop_phaddwq */
    case 1667:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1680:  /* xop_phsubdq */
    case 1679:  /* xop_phsubwd */
    case 1678:  /* xop_phsubbw */
    case 1677:  /* xop_phaddudq */
    case 1675:  /* xop_phadduwd */
    case 1672:  /* xop_phaddubw */
    case 1671:  /* xop_phadddq */
    case 1669:  /* xop_phaddwd */
    case 1666:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1665:  /* xop_pcmov_v4df256 */
    case 1664:  /* xop_pcmov_v8sf256 */
    case 1663:  /* xop_pcmov_v4di256 */
    case 1662:  /* xop_pcmov_v8si256 */
    case 1661:  /* xop_pcmov_v16hi256 */
    case 1660:  /* xop_pcmov_v32qi256 */
    case 1659:  /* xop_pcmov_v2df */
    case 1658:  /* xop_pcmov_v4sf */
    case 1657:  /* xop_pcmov_v2di */
    case 1656:  /* xop_pcmov_v4si */
    case 1655:  /* xop_pcmov_v8hi */
    case 1654:  /* xop_pcmov_v16qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1653:  /* xop_pmadcswd */
    case 1652:  /* xop_pmadcsswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1651:  /* xop_pmacswd */
    case 1650:  /* xop_pmacsswd */
    case 1648:  /* xop_pmacsdqh */
    case 1646:  /* xop_pmacsdql */
    case 1645:  /* xop_pmacssdqh */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1644:  /* xop_pmacssdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1639:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 1638:  /* sse4_2_pcmpistrm */
    case 1637:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1636:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1635:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 1634:  /* sse4_2_pcmpestrm */
    case 1633:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 1632:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 1631:  /* sse4_1_roundsd */
    case 1630:  /* sse4_1_roundss */
    case 1629:  /* *avx_roundsd */
    case 1628:  /* *avx_roundss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1623:  /* sse4_1_ptest */
    case 1622:  /* avx_ptest256 */
    case 1621:  /* avx_vtestpd256 */
    case 1620:  /* avx_vtestps256 */
    case 1619:  /* avx_vtestpd */
    case 1618:  /* avx_vtestps */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1592:  /* sse4_1_pblendw */
    case 1591:  /* *avx_pblendw */
    case 1575:  /* sse4_1_blendpd */
    case 1574:  /* sse4_1_blendps */
    case 1569:  /* avx_blendpd256 */
    case 1568:  /* avx_blendps256 */
    case 1567:  /* avx_blendpd */
    case 1566:  /* avx_blendps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1730:  /* xop_vpermil2v4df3 */
    case 1729:  /* xop_vpermil2v8sf3 */
    case 1728:  /* xop_vpermil2v2df3 */
    case 1727:  /* xop_vpermil2v4sf3 */
    case 1564:  /* sse4a_insertqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 1536:  /* *ssse3_pmulhrswv4hi3 */
    case 1535:  /* *ssse3_pmulhrswv8hi3 */
    case 1534:  /* *avx_pmulhrswv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 1529:  /* ssse3_phsubswv8hi3 */
    case 1528:  /* *avx_phsubswv8hi3 */
    case 1523:  /* ssse3_phsubwv8hi3 */
    case 1522:  /* *avx_phsubwv8hi3 */
    case 1520:  /* ssse3_phaddswv8hi3 */
    case 1519:  /* *avx_phaddswv8hi3 */
    case 1514:  /* ssse3_phaddwv8hi3 */
    case 1513:  /* *avx_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1511:  /* sse3_mwait */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1471:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1754:  /* avx_vbroadcastf128_v4df */
    case 1753:  /* avx_vbroadcastf128_v8sf */
    case 1752:  /* avx_vbroadcastf128_v4di */
    case 1751:  /* avx_vbroadcastf128_v8si */
    case 1750:  /* avx_vbroadcastf128_v16hi */
    case 1749:  /* avx_vbroadcastf128_v32qi */
    case 1260:  /* *vec_concatv2df_sse3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1246:  /* sse2_shufpd_v2di */
    case 1245:  /* sse2_shufpd_v2df */
    case 1244:  /* *avx_shufpd_v2di */
    case 1243:  /* *avx_shufpd_v2df */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 1475:  /* *vec_ext_v4si_mem */
    case 1468:  /* *sse4_1_pextrd */
    case 1467:  /* *sse4_1_pextrw_memory */
    case 1465:  /* *sse4_1_pextrb_memory */
    case 1229:  /* *vec_extract_v4sf_mem */
    case 1228:  /* *sse4_1_extractps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1214:  /* sse4_1_insertps */
    case 1213:  /* *avx_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1473:  /* sse2_loadld */
    case 1472:  /* *avx_loadld */
    case 1210:  /* vec_setv4si_0 */
    case 1209:  /* vec_setv4sf_0 */
    case 1208:  /* *vec_setv4si_0_sse2 */
    case 1207:  /* *vec_setv4sf_0_sse2 */
    case 1206:  /* *vec_setv4si_0_sse4_1 */
    case 1205:  /* *vec_setv4sf_0_sse4_1 */
    case 1204:  /* *vec_setv4si_0_avx */
    case 1203:  /* *vec_setv4sf_0_avx */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1257:  /* sse2_movsd */
    case 1256:  /* *avx_movsd */
    case 1195:  /* sse_movss */
    case 1194:  /* *avx_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1782:  /* vec_set_lo_v32qi */
    case 1780:  /* vec_set_lo_v16hi */
    case 1777:  /* vec_set_lo_v8sf */
    case 1776:  /* vec_set_lo_v8si */
    case 1773:  /* vec_set_lo_v4df */
    case 1772:  /* vec_set_lo_v4di */
    case 1253:  /* sse2_loadlpd */
    case 1252:  /* *avx_loadlpd */
    case 1193:  /* sse_loadlps */
    case 1192:  /* *avx_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1238:  /* avx_shufpd256_1 */
    case 1186:  /* sse_shufps_v4si */
    case 1185:  /* sse_shufps_v4sf */
    case 1184:  /* *avx_shufps_v4si */
    case 1183:  /* *avx_shufps_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1182:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1181:  /* sse3_movsldup */
    case 1180:  /* avx_movsldup256 */
    case 1179:  /* sse3_movshdup */
    case 1178:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1130:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 1163:  /* sse2_cvtss2sd */
    case 1162:  /* *avx_cvtss2sd */
    case 1161:  /* sse2_cvtsd2ss */
    case 1160:  /* *avx_cvtsd2ss */
    case 1150:  /* sse2_cvtsi2sd */
    case 1149:  /* *avx_cvtsi2sd */
    case 1133:  /* sse_cvtsi2ss */
    case 1132:  /* *avx_cvtsi2ss */
    case 1129:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1128:  /* fma4i_fmsubaddv2df4 */
    case 1127:  /* fma4i_fmsubaddv4sf4 */
    case 1126:  /* fma4i_fmsubaddv4df4 */
    case 1125:  /* fma4i_fmsubaddv8sf4 */
    case 1124:  /* fma4i_fmaddsubv2df4 */
    case 1123:  /* fma4i_fmaddsubv4sf4 */
    case 1122:  /* fma4i_fmaddsubv4df4 */
    case 1121:  /* fma4i_fmaddsubv8sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 1120:  /* fma4_fmsubaddv2df4 */
    case 1119:  /* fma4_fmsubaddv4sf4 */
    case 1118:  /* fma4_fmsubaddv4df4 */
    case 1117:  /* fma4_fmsubaddv8sf4 */
    case 1116:  /* fma4_fmaddsubv2df4 */
    case 1115:  /* fma4_fmaddsubv4sf4 */
    case 1114:  /* fma4_fmaddsubv4df4 */
    case 1113:  /* fma4_fmaddsubv8sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 1112:  /* fma4i_vmfnmsubv2df4 */
    case 1111:  /* fma4i_vmfnmsubv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1110:  /* fma4i_vmfnmaddv2df4 */
    case 1109:  /* fma4i_vmfnmaddv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1108:  /* fma4i_vmfmsubv2df4 */
    case 1107:  /* fma4i_vmfmsubv4sf4 */
    case 1106:  /* fma4i_vmfmaddv2df4 */
    case 1105:  /* fma4i_vmfmaddv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1104:  /* fma4i_fnmsubv2df4 */
    case 1103:  /* fma4i_fnmsubv4sf4 */
    case 1096:  /* fma4i_fnmsubv4df4256 */
    case 1095:  /* fma4i_fnmsubv8sf4256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1102:  /* fma4i_fnmaddv2df4 */
    case 1101:  /* fma4i_fnmaddv4sf4 */
    case 1094:  /* fma4i_fnmaddv4df4256 */
    case 1093:  /* fma4i_fnmaddv8sf4256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 1100:  /* fma4i_fmsubv2df4 */
    case 1099:  /* fma4i_fmsubv4sf4 */
    case 1098:  /* fma4i_fmaddv2df4 */
    case 1097:  /* fma4i_fmaddv4sf4 */
    case 1092:  /* fma4i_fmsubv4df4256 */
    case 1091:  /* fma4i_fmsubv8sf4256 */
    case 1090:  /* fma4i_fmaddv4df4256 */
    case 1089:  /* fma4i_fmaddv8sf4256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1088:  /* fma4_vmfnmsubv2df4 */
    case 1087:  /* fma4_vmfnmsubv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1082:  /* fma4_vmfnmaddv2df4 */
    case 1081:  /* fma4_vmfnmaddv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1076:  /* fma4_vmfmsubv2df4 */
    case 1075:  /* fma4_vmfmsubv4sf4 */
    case 1070:  /* fma4_vmfmaddv2df4 */
    case 1069:  /* fma4_vmfmaddv4sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1086:  /* fma4_fnmsubv2df4 */
    case 1085:  /* fma4_fnmsubv4sf4 */
    case 1084:  /* fma4_fnmsubdf4 */
    case 1083:  /* fma4_fnmsubsf4 */
    case 1064:  /* fma4_fnmsubv4df4256 */
    case 1063:  /* fma4_fnmsubv8sf4256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1080:  /* fma4_fnmaddv2df4 */
    case 1079:  /* fma4_fnmaddv4sf4 */
    case 1078:  /* fma4_fnmadddf4 */
    case 1077:  /* fma4_fnmaddsf4 */
    case 1062:  /* fma4_fnmaddv4df4256 */
    case 1061:  /* fma4_fnmaddv8sf4256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1016:  /* sse2_ucomi */
    case 1015:  /* sse_ucomi */
    case 1014:  /* sse2_comi */
    case 1013:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1012:  /* sse2_vmmaskcmpv2df3 */
    case 1011:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1002:  /* avx_cmpsdv2df3 */
    case 1001:  /* avx_cmpssv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 988:  /* avx_hsubv8sf3 */
    case 987:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1530:  /* ssse3_phsubswv4hi3 */
    case 1526:  /* ssse3_phsubdv4si3 */
    case 1525:  /* *avx_phsubdv4si3 */
    case 1524:  /* ssse3_phsubwv4hi3 */
    case 1521:  /* ssse3_phaddswv4hi3 */
    case 1517:  /* ssse3_phadddv4si3 */
    case 1516:  /* *avx_phadddv4si3 */
    case 1515:  /* ssse3_phaddwv4hi3 */
    case 992:  /* sse3_hsubv4sf3 */
    case 991:  /* sse3_haddv4sf3 */
    case 990:  /* *avx_hsubv4sf3 */
    case 989:  /* *avx_haddv4sf3 */
    case 986:  /* avx_hsubv4df3 */
    case 985:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1157:  /* *sse2_cvtpd2dq */
    case 934:  /* sse_vmrsqrtv4sf2 */
    case 933:  /* *avx_vmrsqrtv4sf2 */
    case 922:  /* sse_vmrcpv4sf2 */
    case 921:  /* *avx_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 966:  /* sse2_vmsminv2df3 */
    case 965:  /* sse2_vmsmaxv2df3 */
    case 964:  /* sse_vmsminv4sf3 */
    case 963:  /* sse_vmsmaxv4sf3 */
    case 962:  /* *avx_vmsminv2df3 */
    case 961:  /* *avx_vmsmaxv2df3 */
    case 960:  /* *avx_vmsminv4sf3 */
    case 959:  /* *avx_vmsmaxv4sf3 */
    case 918:  /* sse2_vmdivv2df3 */
    case 917:  /* sse_vmdivv4sf3 */
    case 916:  /* *avx_vmdivv2df3 */
    case 915:  /* *avx_vmdivv4sf3 */
    case 906:  /* sse2_vmmulv2df3 */
    case 905:  /* sse_vmmulv4sf3 */
    case 904:  /* *avx_vmmulv2df3 */
    case 903:  /* *avx_vmmulv4sf3 */
    case 896:  /* sse2_vmsubv2df3 */
    case 895:  /* sse2_vmaddv2df3 */
    case 894:  /* sse_vmsubv4sf3 */
    case 893:  /* sse_vmaddv4sf3 */
    case 892:  /* *avx_vmsubv2df3 */
    case 891:  /* *avx_vmaddv2df3 */
    case 890:  /* *avx_vmsubv4sf3 */
    case 889:  /* *avx_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1744:  /* *avx_vzeroupper */
    case 1743:  /* *avx_vzeroall */
    case 832:  /* *mmx_femms */
    case 831:  /* *mmx_emms */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 1504:  /* *sse2_maskmovdqu */
    case 830:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1470:  /* sse2_pshuflw_1 */
    case 1469:  /* sse2_pshufd_1 */
    case 819:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1466:  /* *sse2_pextrw */
    case 1464:  /* *sse4_1_pextrb */
    case 818:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 1463:  /* *sse4_1_pinsrd */
    case 1462:  /* *sse2_pinsrw */
    case 1461:  /* *sse4_1_pinsrb */
    case 1460:  /* *avx_pinsrd */
    case 1459:  /* *avx_pinsrw */
    case 1458:  /* *avx_pinsrb */
    case 1212:  /* *vec_setv4sf_sse4_1 */
    case 1211:  /* *vec_setv4sf_avx */
    case 817:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1457:  /* vec_interleave_lowv4si */
    case 1456:  /* *avx_interleave_lowv4si */
    case 1455:  /* vec_interleave_highv4si */
    case 1454:  /* *avx_interleave_highv4si */
    case 1453:  /* vec_interleave_lowv8hi */
    case 1452:  /* *avx_interleave_lowv8hi */
    case 1451:  /* vec_interleave_highv8hi */
    case 1450:  /* *avx_interleave_highv8hi */
    case 1449:  /* vec_interleave_lowv16qi */
    case 1448:  /* *avx_interleave_lowv16qi */
    case 1447:  /* vec_interleave_highv16qi */
    case 1446:  /* *avx_interleave_highv16qi */
    case 1242:  /* vec_interleave_lowv2di */
    case 1241:  /* *avx_interleave_lowv2di */
    case 1240:  /* vec_interleave_highv2di */
    case 1239:  /* *avx_interleave_highv2di */
    case 1237:  /* *sse2_interleave_lowv2df */
    case 1236:  /* *sse3_interleave_lowv2df */
    case 1235:  /* *avx_interleave_lowv2df */
    case 1234:  /* *avx_unpcklpd256 */
    case 1233:  /* *sse2_interleave_highv2df */
    case 1232:  /* *sse3_interleave_highv2df */
    case 1231:  /* *avx_interleave_highv2df */
    case 1230:  /* avx_unpckhpd256 */
    case 1177:  /* vec_interleave_lowv4sf */
    case 1176:  /* *avx_interleave_lowv4sf */
    case 1175:  /* avx_unpcklps256 */
    case 1174:  /* vec_interleave_highv4sf */
    case 1173:  /* *avx_interleave_highv4sf */
    case 1172:  /* avx_unpckhps256 */
    case 1171:  /* sse_movlhps */
    case 1170:  /* *avx_movlhps */
    case 1169:  /* sse_movhlps */
    case 1168:  /* *avx_movhlps */
    case 816:  /* mmx_punpckldq */
    case 815:  /* mmx_punpckhdq */
    case 814:  /* mmx_punpcklwd */
    case 813:  /* mmx_punpckhwd */
    case 812:  /* mmx_punpcklbw */
    case 811:  /* mmx_punpckhbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 1588:  /* sse4_1_packusdw */
    case 1587:  /* *avx_packusdw */
    case 1445:  /* sse2_packuswb */
    case 1444:  /* *avx_packuswb */
    case 1443:  /* sse2_packssdw */
    case 1442:  /* *avx_packssdw */
    case 1441:  /* sse2_packsswb */
    case 1440:  /* *avx_packsswb */
    case 810:  /* mmx_packuswb */
    case 809:  /* mmx_packssdw */
    case 808:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1649:  /* xop_mulv2div2di3_high */
    case 1647:  /* xop_mulv2div2di3_low */
    case 1305:  /* *sse4_1_mulv2siv2di3 */
    case 1304:  /* *avx_mulv2siv2di3 */
    case 1303:  /* *sse2_umulv2siv2di3 */
    case 1302:  /* *avx_umulv2siv2di3 */
    case 777:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1496:  /* *sse2_uavgv8hi3 */
    case 1495:  /* *avx_uavgv8hi3 */
    case 1494:  /* *sse2_uavgv16qi3 */
    case 1493:  /* *avx_uavgv16qi3 */
    case 827:  /* *mmx_uavgv4hi3 */
    case 826:  /* *mmx_uavgv8qi3 */
    case 776:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 1533:  /* ssse3_pmaddubsw */
    case 1532:  /* ssse3_pmaddubsw128 */
    case 1531:  /* *avx_pmaddubsw128 */
    case 1307:  /* *sse2_pmaddwd */
    case 1306:  /* *avx_pmaddwd */
    case 775:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1301:  /* *umulv8hi3_highpart */
    case 1300:  /* *avx_umulv8hi3_highpart */
    case 1299:  /* *smulv8hi3_highpart */
    case 1298:  /* *avxv8hi3_highpart */
    case 774:  /* *mmx_umulv4hi3_highpart */
    case 773:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 1617:  /* *sse4_1_zero_extendv2siv2di2 */
    case 1615:  /* *sse4_1_zero_extendv2hiv2di2 */
    case 1613:  /* *sse4_1_zero_extendv4hiv4si2 */
    case 1611:  /* *sse4_1_zero_extendv2qiv2di2 */
    case 1609:  /* *sse4_1_zero_extendv4qiv4si2 */
    case 1607:  /* *sse4_1_zero_extendv8qiv8hi2 */
    case 1605:  /* *sse4_1_extendv2siv2di2 */
    case 1603:  /* *sse4_1_extendv2hiv2di2 */
    case 1601:  /* *sse4_1_extendv4hiv4si2 */
    case 1599:  /* *sse4_1_extendv2qiv2di2 */
    case 1597:  /* *sse4_1_extendv4qiv4si2 */
    case 1595:  /* *sse4_1_extendv8qiv8hi2 */
    case 749:  /* mmx_pi2fw */
    case 748:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 984:  /* sse3_addsubv2df3 */
    case 983:  /* *avx_addsubv2df3 */
    case 982:  /* sse3_addsubv4sf3 */
    case 981:  /* *avx_addsubv4sf3 */
    case 980:  /* avx_addsubv4df3 */
    case 979:  /* avx_addsubv8sf3 */
    case 743:  /* mmx_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1527:  /* ssse3_phsubdv2si3 */
    case 1518:  /* ssse3_phadddv2si3 */
    case 996:  /* sse3_hsubv2df3 */
    case 995:  /* sse3_haddv2df3 */
    case 994:  /* *avx_hsubv2df3 */
    case 993:  /* *avx_haddv2df3 */
    case 742:  /* mmx_hsubv2sf3 */
    case 741:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 717:  /* *lwp_lwpinssi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1512:  /* sse3_monitor */
    case 716:  /* *lwp_lwpvalsi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 713:  /* *rdtscp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 702:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 1783:  /* vec_set_hi_v32qi */
    case 1781:  /* vec_set_hi_v16hi */
    case 1779:  /* vec_set_hi_v8sf */
    case 1778:  /* vec_set_hi_v8si */
    case 1775:  /* vec_set_hi_v4df */
    case 1774:  /* vec_set_hi_v4di */
    case 1388:  /* *andnottf3 */
    case 1387:  /* sse2_andnotv2di3 */
    case 1386:  /* sse2_andnotv4si3 */
    case 1385:  /* sse2_andnotv8hi3 */
    case 1384:  /* sse2_andnotv16qi3 */
    case 1383:  /* *avx_andnotv2di3 */
    case 1382:  /* *avx_andnotv4si3 */
    case 1381:  /* *avx_andnotv8hi3 */
    case 1380:  /* *avx_andnotv16qi3 */
    case 1379:  /* *sse_andnotv2di3 */
    case 1378:  /* *sse_andnotv4si3 */
    case 1377:  /* *sse_andnotv8hi3 */
    case 1376:  /* *sse_andnotv16qi3 */
    case 1375:  /* *avx_andnotv4di3 */
    case 1374:  /* *avx_andnotv8si3 */
    case 1373:  /* *avx_andnotv16hi3 */
    case 1372:  /* *avx_andnotv32qi3 */
    case 1251:  /* sse2_loadhpd */
    case 1250:  /* *avx_loadhpd */
    case 1189:  /* sse_loadhps */
    case 1188:  /* *avx_loadhps */
    case 1165:  /* *sse2_cvtpd2ps */
    case 1159:  /* *sse2_cvttpd2dq */
    case 1044:  /* *andnotdf3 */
    case 1043:  /* *andnotsf3 */
    case 1042:  /* *avx_andnotdf3 */
    case 1041:  /* *avx_andnotsf3 */
    case 1022:  /* sse2_andnotv2df3 */
    case 1021:  /* sse_andnotv4sf3 */
    case 1020:  /* avx_andnotv4df3 */
    case 1019:  /* avx_andnotv8sf3 */
    case 1018:  /* avx_andnotv2df3 */
    case 1017:  /* avx_andnotv4sf3 */
    case 930:  /* sse2_vmsqrtv2df2 */
    case 929:  /* sse_vmsqrtv4sf2 */
    case 928:  /* *avx_vmsqrtv2df2 */
    case 927:  /* *avx_vmsqrtv4sf2 */
    case 798:  /* mmx_andnotv2si3 */
    case 797:  /* mmx_andnotv4hi3 */
    case 796:  /* mmx_andnotv8qi3 */
    case 700:  /* *sibcall_value_1 */
    case 699:  /* *call_value_1 */
    case 698:  /* *call_value_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 697:  /* *sibcall_value_pop_1 */
    case 696:  /* *call_value_pop_1 */
    case 695:  /* *call_value_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 694:  /* allocate_stack_worker_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1803:  /* *vec_concatv4df_avx */
    case 1802:  /* *vec_concatv8sf_avx */
    case 1801:  /* *vec_concatv4di_avx */
    case 1800:  /* *vec_concatv8si_avx */
    case 1799:  /* *vec_concatv16hi_avx */
    case 1798:  /* *vec_concatv32qi_avx */
    case 1692:  /* xop_rotrv2di3 */
    case 1691:  /* xop_rotrv4si3 */
    case 1690:  /* xop_rotrv8hi3 */
    case 1689:  /* xop_rotrv16qi3 */
    case 1688:  /* xop_rotlv2di3 */
    case 1687:  /* xop_rotlv4si3 */
    case 1686:  /* xop_rotlv8hi3 */
    case 1685:  /* xop_rotlv16qi3 */
    case 1492:  /* vec_concatv2di */
    case 1491:  /* *vec_concatv2di_avx */
    case 1490:  /* *vec_concatv4si_1 */
    case 1489:  /* *vec_concatv4si_1_avx */
    case 1488:  /* *vec_concatv2si_sse */
    case 1487:  /* *vec_concatv2si_sse2 */
    case 1486:  /* *vec_concatv2si_sse4_1 */
    case 1485:  /* *vec_concatv2si_avx */
    case 1439:  /* *xortf3 */
    case 1438:  /* *iortf3 */
    case 1437:  /* *andtf3 */
    case 1436:  /* *sse2_xorv2di3 */
    case 1435:  /* *sse2_iorv2di3 */
    case 1434:  /* *sse2_andv2di3 */
    case 1433:  /* *sse2_xorv4si3 */
    case 1432:  /* *sse2_iorv4si3 */
    case 1431:  /* *sse2_andv4si3 */
    case 1430:  /* *sse2_xorv8hi3 */
    case 1429:  /* *sse2_iorv8hi3 */
    case 1428:  /* *sse2_andv8hi3 */
    case 1427:  /* *sse2_xorv16qi3 */
    case 1426:  /* *sse2_iorv16qi3 */
    case 1425:  /* *sse2_andv16qi3 */
    case 1424:  /* *avx_xorv2di3 */
    case 1423:  /* *avx_iorv2di3 */
    case 1422:  /* *avx_andv2di3 */
    case 1421:  /* *avx_xorv4si3 */
    case 1420:  /* *avx_iorv4si3 */
    case 1419:  /* *avx_andv4si3 */
    case 1418:  /* *avx_xorv8hi3 */
    case 1417:  /* *avx_iorv8hi3 */
    case 1416:  /* *avx_andv8hi3 */
    case 1415:  /* *avx_xorv16qi3 */
    case 1414:  /* *avx_iorv16qi3 */
    case 1413:  /* *avx_andv16qi3 */
    case 1412:  /* *sse_xorv2di3 */
    case 1411:  /* *sse_iorv2di3 */
    case 1410:  /* *sse_andv2di3 */
    case 1409:  /* *sse_xorv4si3 */
    case 1408:  /* *sse_iorv4si3 */
    case 1407:  /* *sse_andv4si3 */
    case 1406:  /* *sse_xorv8hi3 */
    case 1405:  /* *sse_iorv8hi3 */
    case 1404:  /* *sse_andv8hi3 */
    case 1403:  /* *sse_xorv16qi3 */
    case 1402:  /* *sse_iorv16qi3 */
    case 1401:  /* *sse_andv16qi3 */
    case 1400:  /* *avx_xorv4di3 */
    case 1399:  /* *avx_iorv4di3 */
    case 1398:  /* *avx_andv4di3 */
    case 1397:  /* *avx_xorv8si3 */
    case 1396:  /* *avx_iorv8si3 */
    case 1395:  /* *avx_andv8si3 */
    case 1394:  /* *avx_xorv16hi3 */
    case 1393:  /* *avx_iorv16hi3 */
    case 1392:  /* *avx_andv16hi3 */
    case 1391:  /* *avx_xorv32qi3 */
    case 1390:  /* *avx_iorv32qi3 */
    case 1389:  /* *avx_andv32qi3 */
    case 1371:  /* sse4_2_gtv2di3 */
    case 1370:  /* sse2_gtv4si3 */
    case 1369:  /* sse2_gtv8hi3 */
    case 1368:  /* sse2_gtv16qi3 */
    case 1367:  /* *avx_gtv2di3 */
    case 1366:  /* *avx_gtv4si3 */
    case 1365:  /* *avx_gtv8hi3 */
    case 1364:  /* *avx_gtv16qi3 */
    case 1363:  /* *sse4_1_eqv2di3 */
    case 1362:  /* *sse2_eqv4si3 */
    case 1361:  /* *sse2_eqv8hi3 */
    case 1360:  /* *sse2_eqv16qi3 */
    case 1359:  /* *avx_eqv2di3 */
    case 1358:  /* *avx_eqv4si3 */
    case 1357:  /* *avx_eqv8hi3 */
    case 1356:  /* *avx_eqv16qi3 */
    case 1355:  /* *sse4_1_uminv4si3 */
    case 1354:  /* *sse4_1_umaxv4si3 */
    case 1353:  /* *sse4_1_uminv8hi3 */
    case 1352:  /* *sse4_1_umaxv8hi3 */
    case 1351:  /* *sse4_1_sminv4si3 */
    case 1350:  /* *sse4_1_smaxv4si3 */
    case 1349:  /* *sse4_1_sminv16qi3 */
    case 1348:  /* *sse4_1_smaxv16qi3 */
    case 1347:  /* *sminv8hi3 */
    case 1346:  /* *smaxv8hi3 */
    case 1345:  /* *uminv16qi3 */
    case 1344:  /* *umaxv16qi3 */
    case 1343:  /* *avx_uminv4si3 */
    case 1342:  /* *avx_umaxv4si3 */
    case 1341:  /* *avx_sminv4si3 */
    case 1340:  /* *avx_smaxv4si3 */
    case 1339:  /* *avx_uminv8hi3 */
    case 1338:  /* *avx_umaxv8hi3 */
    case 1337:  /* *avx_sminv8hi3 */
    case 1336:  /* *avx_smaxv8hi3 */
    case 1335:  /* *avx_uminv16qi3 */
    case 1334:  /* *avx_umaxv16qi3 */
    case 1333:  /* *avx_sminv16qi3 */
    case 1332:  /* *avx_smaxv16qi3 */
    case 1331:  /* ashlv2di3 */
    case 1330:  /* ashlv4si3 */
    case 1329:  /* ashlv8hi3 */
    case 1328:  /* sse2_ashlv1ti3 */
    case 1327:  /* *avx_ashlv2di3 */
    case 1326:  /* *avx_ashlv4si3 */
    case 1325:  /* *avx_ashlv8hi3 */
    case 1324:  /* *avx_ashlv1ti3 */
    case 1323:  /* lshrv2di3 */
    case 1322:  /* lshrv4si3 */
    case 1321:  /* lshrv8hi3 */
    case 1320:  /* sse2_lshrv1ti3 */
    case 1319:  /* *avx_lshrv2di3 */
    case 1318:  /* *avx_lshrv4si3 */
    case 1317:  /* *avx_lshrv8hi3 */
    case 1316:  /* *avx_lshrv1ti3 */
    case 1315:  /* ashrv4si3 */
    case 1314:  /* ashrv8hi3 */
    case 1313:  /* *avx_ashrv4si3 */
    case 1312:  /* *avx_ashrv8hi3 */
    case 1311:  /* mulv2di3 */
    case 1310:  /* *sse2_mulv4si3 */
    case 1309:  /* *sse4_1_mulv4si3 */
    case 1308:  /* *avx_mulv4si3 */
    case 1297:  /* *mulv8hi3 */
    case 1296:  /* *avx_mulv8hi3 */
    case 1295:  /* mulv16qi3 */
    case 1294:  /* *sse2_ussubv8hi3 */
    case 1293:  /* *sse2_sssubv8hi3 */
    case 1292:  /* *sse2_usaddv8hi3 */
    case 1291:  /* *sse2_ssaddv8hi3 */
    case 1290:  /* *sse2_ussubv16qi3 */
    case 1289:  /* *sse2_sssubv16qi3 */
    case 1288:  /* *sse2_usaddv16qi3 */
    case 1287:  /* *sse2_ssaddv16qi3 */
    case 1286:  /* *avx_ussubv8hi3 */
    case 1285:  /* *avx_sssubv8hi3 */
    case 1284:  /* *avx_usaddv8hi3 */
    case 1283:  /* *avx_ssaddv8hi3 */
    case 1282:  /* *avx_ussubv16qi3 */
    case 1281:  /* *avx_sssubv16qi3 */
    case 1280:  /* *avx_usaddv16qi3 */
    case 1279:  /* *avx_ssaddv16qi3 */
    case 1278:  /* *subv2di3 */
    case 1277:  /* *addv2di3 */
    case 1276:  /* *subv4si3 */
    case 1275:  /* *addv4si3 */
    case 1274:  /* *subv8hi3 */
    case 1273:  /* *addv8hi3 */
    case 1272:  /* *subv16qi3 */
    case 1271:  /* *addv16qi3 */
    case 1270:  /* *avx_subv2di3 */
    case 1269:  /* *avx_addv2di3 */
    case 1268:  /* *avx_subv4si3 */
    case 1267:  /* *avx_addv4si3 */
    case 1266:  /* *avx_subv8hi3 */
    case 1265:  /* *avx_addv8hi3 */
    case 1264:  /* *avx_subv16qi3 */
    case 1263:  /* *avx_addv16qi3 */
    case 1262:  /* *vec_concatv2df */
    case 1261:  /* *vec_concatv2df_avx */
    case 1202:  /* *vec_concatv4sf_sse */
    case 1201:  /* *vec_concatv4sf_avx */
    case 1200:  /* *vec_concatv2sf_sse */
    case 1199:  /* *vec_concatv2sf_sse4_1 */
    case 1198:  /* *vec_concatv2sf_avx */
    case 1056:  /* *xordf3 */
    case 1055:  /* *iordf3 */
    case 1054:  /* *anddf3 */
    case 1053:  /* *xorsf3 */
    case 1052:  /* *iorsf3 */
    case 1051:  /* *andsf3 */
    case 1050:  /* *avx_xordf3 */
    case 1049:  /* *avx_iordf3 */
    case 1048:  /* *avx_anddf3 */
    case 1047:  /* *avx_xorsf3 */
    case 1046:  /* *avx_iorsf3 */
    case 1045:  /* *avx_andsf3 */
    case 1040:  /* *xorv2df3 */
    case 1039:  /* *iorv2df3 */
    case 1038:  /* *andv2df3 */
    case 1037:  /* *xorv4sf3 */
    case 1036:  /* *iorv4sf3 */
    case 1035:  /* *andv4sf3 */
    case 1034:  /* *avx_xorv4df3 */
    case 1033:  /* *avx_iorv4df3 */
    case 1032:  /* *avx_andv4df3 */
    case 1031:  /* *avx_xorv8sf3 */
    case 1030:  /* *avx_iorv8sf3 */
    case 1029:  /* *avx_andv8sf3 */
    case 1028:  /* *avx_xorv2df3 */
    case 1027:  /* *avx_iorv2df3 */
    case 1026:  /* *avx_andv2df3 */
    case 1025:  /* *avx_xorv4sf3 */
    case 1024:  /* *avx_iorv4sf3 */
    case 1023:  /* *avx_andv4sf3 */
    case 958:  /* *sminv2df3 */
    case 957:  /* *smaxv2df3 */
    case 956:  /* *sminv4sf3 */
    case 955:  /* *smaxv4sf3 */
    case 954:  /* *avx_sminv4df3 */
    case 953:  /* *avx_smaxv4df3 */
    case 952:  /* *avx_sminv8sf3 */
    case 951:  /* *avx_smaxv8sf3 */
    case 950:  /* *avx_sminv2df3 */
    case 949:  /* *avx_smaxv2df3 */
    case 948:  /* *avx_sminv4sf3 */
    case 947:  /* *avx_smaxv4sf3 */
    case 946:  /* *sminv2df3_finite */
    case 945:  /* *smaxv2df3_finite */
    case 944:  /* *sminv4sf3_finite */
    case 943:  /* *smaxv4sf3_finite */
    case 942:  /* *avx_sminv4df3_finite */
    case 941:  /* *avx_smaxv4df3_finite */
    case 940:  /* *avx_sminv8sf3_finite */
    case 939:  /* *avx_smaxv8sf3_finite */
    case 938:  /* *avx_sminv2df3_finite */
    case 937:  /* *avx_smaxv2df3_finite */
    case 936:  /* *avx_sminv4sf3_finite */
    case 935:  /* *avx_smaxv4sf3_finite */
    case 914:  /* sse2_divv2df3 */
    case 913:  /* sse_divv4sf3 */
    case 912:  /* *avx_divv2df3 */
    case 911:  /* *avx_divv4sf3 */
    case 910:  /* avx_divv4df3 */
    case 909:  /* avx_divv8sf3 */
    case 908:  /* avx_divv2df3 */
    case 907:  /* avx_divv4sf3 */
    case 902:  /* *mulv2df3 */
    case 901:  /* *mulv4sf3 */
    case 900:  /* *avx_mulv4df3 */
    case 899:  /* *avx_mulv8sf3 */
    case 898:  /* *avx_mulv2df3 */
    case 897:  /* *avx_mulv4sf3 */
    case 888:  /* *subv2df3 */
    case 887:  /* *addv2df3 */
    case 886:  /* *subv4sf3 */
    case 885:  /* *addv4sf3 */
    case 884:  /* *avx_subv4df3 */
    case 883:  /* *avx_addv4df3 */
    case 882:  /* *avx_subv8sf3 */
    case 881:  /* *avx_addv8sf3 */
    case 880:  /* *avx_subv2df3 */
    case 879:  /* *avx_addv2df3 */
    case 878:  /* *avx_subv4sf3 */
    case 877:  /* *avx_addv4sf3 */
    case 823:  /* *mmx_concatv2si */
    case 807:  /* *mmx_xorv2si3 */
    case 806:  /* *mmx_iorv2si3 */
    case 805:  /* *mmx_andv2si3 */
    case 804:  /* *mmx_xorv4hi3 */
    case 803:  /* *mmx_iorv4hi3 */
    case 802:  /* *mmx_andv4hi3 */
    case 801:  /* *mmx_xorv8qi3 */
    case 800:  /* *mmx_iorv8qi3 */
    case 799:  /* *mmx_andv8qi3 */
    case 795:  /* mmx_gtv2si3 */
    case 794:  /* mmx_gtv4hi3 */
    case 793:  /* mmx_gtv8qi3 */
    case 792:  /* *mmx_eqv2si3 */
    case 791:  /* *mmx_eqv4hi3 */
    case 790:  /* *mmx_eqv8qi3 */
    case 789:  /* mmx_ashlv1di3 */
    case 788:  /* mmx_ashlv2si3 */
    case 787:  /* mmx_ashlv4hi3 */
    case 786:  /* mmx_lshrv1di3 */
    case 785:  /* mmx_lshrv2si3 */
    case 784:  /* mmx_lshrv4hi3 */
    case 783:  /* mmx_ashrv2si3 */
    case 782:  /* mmx_ashrv4hi3 */
    case 781:  /* *mmx_uminv8qi3 */
    case 780:  /* *mmx_umaxv8qi3 */
    case 779:  /* *mmx_sminv4hi3 */
    case 778:  /* *mmx_smaxv4hi3 */
    case 772:  /* *mmx_mulv4hi3 */
    case 771:  /* *mmx_ussubv4hi3 */
    case 770:  /* *mmx_sssubv4hi3 */
    case 769:  /* *mmx_usaddv4hi3 */
    case 768:  /* *mmx_ssaddv4hi3 */
    case 767:  /* *mmx_ussubv8qi3 */
    case 766:  /* *mmx_sssubv8qi3 */
    case 765:  /* *mmx_usaddv8qi3 */
    case 764:  /* *mmx_ssaddv8qi3 */
    case 763:  /* *mmx_subv1di3 */
    case 762:  /* *mmx_addv1di3 */
    case 761:  /* *mmx_subv2si3 */
    case 760:  /* *mmx_addv2si3 */
    case 759:  /* *mmx_subv4hi3 */
    case 758:  /* *mmx_addv4hi3 */
    case 757:  /* *mmx_subv8qi3 */
    case 756:  /* *mmx_addv8qi3 */
    case 753:  /* *mmx_concatv2sf */
    case 746:  /* mmx_gev2sf3 */
    case 745:  /* mmx_gtv2sf3 */
    case 744:  /* *mmx_eqv2sf3 */
    case 735:  /* *mmx_sminv2sf3 */
    case 734:  /* *mmx_smaxv2sf3 */
    case 733:  /* *mmx_sminv2sf3_finite */
    case 732:  /* *mmx_smaxv2sf3_finite */
    case 731:  /* *mmx_mulv2sf3 */
    case 730:  /* *mmx_subv2sf3 */
    case 729:  /* *mmx_addv2sf3 */
    case 684:  /* smindf3 */
    case 683:  /* smaxdf3 */
    case 682:  /* sminsf3 */
    case 681:  /* smaxsf3 */
    case 680:  /* *avx_smindf3 */
    case 679:  /* *avx_smaxdf3 */
    case 678:  /* *avx_sminsf3 */
    case 677:  /* *avx_smaxsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 671:  /* *movqicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 676:  /* *xop_pcmov_df */
    case 675:  /* *xop_pcmov_sf */
    case 674:  /* *movxfcc_1 */
    case 673:  /* *movdfcc_1 */
    case 672:  /* *movsfcc_1_387 */
    case 670:  /* *movsicc_noc */
    case 669:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 665:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 664:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 663:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 662:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 661:  /* *rep_stossi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 660:  /* *strsetqi_1 */
    case 659:  /* *strsethi_1 */
    case 658:  /* *strsetsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 657:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 656:  /* *rep_movsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 655:  /* *strmovqi_1 */
    case 654:  /* *strmovhi_1 */
    case 653:  /* *strmovsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 638:  /* fistdi2_ceil_with_temp */
    case 627:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 642:  /* fistsi2_ceil_with_temp */
    case 641:  /* fisthi2_ceil_with_temp */
    case 637:  /* fistdi2_ceil */
    case 631:  /* fistsi2_floor_with_temp */
    case 630:  /* fisthi2_floor_with_temp */
    case 626:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 645:  /* frndintxf2_mask_pm */
    case 643:  /* frndintxf2_trunc */
    case 636:  /* *fistdi2_ceil_1 */
    case 635:  /* *fistsi2_ceil_1 */
    case 634:  /* *fisthi2_ceil_1 */
    case 632:  /* frndintxf2_ceil */
    case 625:  /* *fistdi2_floor_1 */
    case 624:  /* *fistsi2_floor_1 */
    case 623:  /* *fisthi2_floor_1 */
    case 621:  /* frndintxf2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 646:  /* frndintxf2_mask_pm_i387 */
    case 644:  /* frndintxf2_trunc_i387 */
    case 640:  /* fistsi2_ceil */
    case 639:  /* fisthi2_ceil */
    case 633:  /* frndintxf2_ceil_i387 */
    case 629:  /* fistsi2_floor */
    case 628:  /* fisthi2_floor */
    case 622:  /* frndintxf2_floor_i387 */
    case 614:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 705:  /* stack_tls_protect_set_si */
    case 704:  /* stack_protect_set_si */
    case 620:  /* fistsi2_with_temp */
    case 619:  /* fisthi2_with_temp */
    case 613:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1765:  /* avx_vpermilvarv4df3 */
    case 1764:  /* avx_vpermilvarv8sf3 */
    case 1763:  /* avx_vpermilvarv2df3 */
    case 1762:  /* avx_vpermilvarv4sf3 */
    case 1740:  /* aeskeygenassist */
    case 1738:  /* aesdeclast */
    case 1737:  /* *avx_aesdeclast */
    case 1736:  /* aesdec */
    case 1735:  /* *avx_aesdec */
    case 1734:  /* aesenclast */
    case 1733:  /* *avx_aesenclast */
    case 1732:  /* aesenc */
    case 1731:  /* *avx_aesenc */
    case 1627:  /* sse4_1_roundpd */
    case 1626:  /* sse4_1_roundps */
    case 1625:  /* avx_roundpd256 */
    case 1624:  /* avx_roundps256 */
    case 1565:  /* sse4a_insertq */
    case 1563:  /* sse4a_extrq */
    case 1548:  /* ssse3_psignv2si3 */
    case 1547:  /* ssse3_psignv4hi3 */
    case 1546:  /* ssse3_psignv8qi3 */
    case 1545:  /* ssse3_psignv4si3 */
    case 1544:  /* ssse3_psignv8hi3 */
    case 1543:  /* ssse3_psignv16qi3 */
    case 1542:  /* *avx_psignv4si3 */
    case 1541:  /* *avx_psignv8hi3 */
    case 1540:  /* *avx_psignv16qi3 */
    case 1539:  /* ssse3_pshufbv8qi3 */
    case 1538:  /* ssse3_pshufbv16qi3 */
    case 1537:  /* *avx_pshufbv16qi3 */
    case 1498:  /* sse2_psadbw */
    case 1497:  /* *avx_psadbw */
    case 978:  /* *ieee_smaxv2df3 */
    case 977:  /* *ieee_smaxv4sf3 */
    case 976:  /* *ieee_sminv2df3 */
    case 975:  /* *ieee_sminv4sf3 */
    case 974:  /* *avx_ieee_smaxv4df3 */
    case 973:  /* *avx_ieee_smaxv8sf3 */
    case 972:  /* *avx_ieee_smaxv2df3 */
    case 971:  /* *avx_ieee_smaxv4sf3 */
    case 970:  /* *avx_ieee_sminv4df3 */
    case 969:  /* *avx_ieee_sminv8sf3 */
    case 968:  /* *avx_ieee_sminv2df3 */
    case 967:  /* *avx_ieee_sminv4sf3 */
    case 828:  /* mmx_psadbw */
    case 740:  /* mmx_rsqit1v2sf3 */
    case 738:  /* mmx_rcpit2v2sf3 */
    case 737:  /* mmx_rcpit1v2sf3 */
    case 710:  /* sse4_2_crc32si */
    case 709:  /* sse4_2_crc32hi */
    case 708:  /* sse4_2_crc32qi */
    case 692:  /* *ieee_smaxdf3 */
    case 691:  /* *ieee_smaxsf3 */
    case 690:  /* *avx_ieee_smaxdf3 */
    case 689:  /* *avx_ieee_smaxsf3 */
    case 688:  /* *ieee_smindf3 */
    case 687:  /* *ieee_sminsf3 */
    case 686:  /* *avx_ieee_smindf3 */
    case 685:  /* *avx_ieee_sminsf3 */
    case 610:  /* sse4_1_rounddf2 */
    case 609:  /* sse4_1_roundsf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 608:  /* *fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 603:  /* fyl2xp1_extenddfxf3_i387 */
    case 602:  /* fyl2xp1_extendsfxf3_i387 */
    case 600:  /* fyl2x_extenddfxf3_i387 */
    case 599:  /* fyl2x_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 597:  /* fpatan_extenddfxf3_i387 */
    case 596:  /* fpatan_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 707:  /* stack_tls_protect_test_si */
    case 706:  /* stack_protect_test_si */
    case 601:  /* fyl2xp1xf3_i387 */
    case 598:  /* fyl2xxf3_i387 */
    case 595:  /* *fpatanxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 594:  /* fptan_extenddfxf4_i387 */
    case 593:  /* fptan_extendsfxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 592:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 606:  /* fxtract_extenddfxf3_i387 */
    case 605:  /* fxtract_extendsfxf3_i387 */
    case 591:  /* sincos_extenddfxf3_i387 */
    case 590:  /* sincos_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 604:  /* fxtractxf3_i387 */
    case 589:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1561:  /* sse4a_vmmovntv2df */
    case 1560:  /* sse4a_vmmovntv4sf */
    case 1151:  /* sse2_cvtsd2si */
    case 1134:  /* sse_cvtss2si */
    case 588:  /* *cos_extenddfxf2_i387 */
    case 587:  /* *cos_extendsfxf2_i387 */
    case 585:  /* *sin_extenddfxf2_i387 */
    case 584:  /* *sin_extendsfxf2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 582:  /* fprem1xf4_i387 */
    case 581:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 572:  /* *fop_xf_6_i387 */
    case 571:  /* *fop_xf_6_i387 */
    case 560:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 570:  /* *fop_xf_5_i387 */
    case 569:  /* *fop_xf_5_i387 */
    case 566:  /* *fop_xf_3_i387 */
    case 565:  /* *fop_xf_3_i387 */
    case 559:  /* *fop_df_5_i387 */
    case 557:  /* *fop_df_3_i387 */
    case 556:  /* *fop_sf_3_i387 */
    case 555:  /* *fop_df_3_i387 */
    case 554:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 568:  /* *fop_xf_4_i387 */
    case 567:  /* *fop_xf_4_i387 */
    case 564:  /* *fop_xf_2_i387 */
    case 563:  /* *fop_xf_2_i387 */
    case 558:  /* *fop_df_4_i387 */
    case 553:  /* *fop_df_2_i387 */
    case 552:  /* *fop_sf_2_i387 */
    case 551:  /* *fop_df_2_i387 */
    case 550:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1797:  /* avx_pd_pd256 */
    case 1796:  /* avx_ps_ps256 */
    case 1795:  /* avx_si_si256 */
    case 1794:  /* avx_pd256_pd */
    case 1793:  /* avx_ps256_ps */
    case 1792:  /* avx_si256_si */
    case 1739:  /* aesimc */
    case 1710:  /* xop_frczv4df2256 */
    case 1709:  /* xop_frczv8sf2256 */
    case 1706:  /* xop_frczv2df2 */
    case 1705:  /* xop_frczv4sf2 */
    case 1593:  /* sse4_1_phminposuw */
    case 1584:  /* sse4_1_movntdqa */
    case 1559:  /* sse4a_movntdf */
    case 1558:  /* sse4a_movntsf */
    case 1503:  /* sse2_pmovmskb */
    case 1502:  /* sse2_movmskpd */
    case 1501:  /* sse_movmskps */
    case 1500:  /* avx_movmskpd256 */
    case 1499:  /* avx_movmskps256 */
    case 1156:  /* avx_cvtpd2dq256 */
    case 1152:  /* sse2_cvtsd2si_2 */
    case 1147:  /* sse2_cvtpd2pi */
    case 1142:  /* sse2_cvtps2dq */
    case 1141:  /* avx_cvtps2dq256 */
    case 1140:  /* avx_cvtps2dq */
    case 1135:  /* sse_cvtss2si_2 */
    case 932:  /* sse_rsqrtv4sf2 */
    case 931:  /* avx_rsqrtv8sf2 */
    case 920:  /* sse_rcpv4sf2 */
    case 919:  /* avx_rcpv8sf2 */
    case 876:  /* sse3_lddqu */
    case 875:  /* avx_lddqu */
    case 874:  /* avx_lddqu256 */
    case 873:  /* sse2_movntsi */
    case 872:  /* sse2_movntv2di */
    case 871:  /* avx_movntv2di */
    case 870:  /* avx_movntv4di */
    case 869:  /* sse2_movntv2df */
    case 868:  /* sse_movntv4sf */
    case 867:  /* avx_movntv4df */
    case 866:  /* avx_movntv8sf */
    case 865:  /* avx_movntv2df */
    case 864:  /* avx_movntv4sf */
    case 863:  /* sse2_movdqu */
    case 862:  /* avx_movdqu */
    case 861:  /* avx_movdqu256 */
    case 860:  /* sse2_movupd */
    case 859:  /* sse_movups */
    case 857:  /* avx_movupd256 */
    case 856:  /* avx_movups256 */
    case 855:  /* avx_movupd */
    case 854:  /* avx_movups */
    case 829:  /* mmx_pmovmskb */
    case 739:  /* mmx_rsqrtv2sf2 */
    case 736:  /* mmx_rcpv2sf2 */
    case 728:  /* sse_movntdi */
    case 711:  /* *rdpmc */
    case 651:  /* fxamdf2_i387_with_temp */
    case 650:  /* fxamsf2_i387_with_temp */
    case 649:  /* fxamxf2_i387 */
    case 648:  /* fxamdf2_i387 */
    case 647:  /* fxamsf2_i387 */
    case 618:  /* fistsi2 */
    case 617:  /* fisthi2 */
    case 616:  /* *fistsi2_1 */
    case 615:  /* *fisthi2_1 */
    case 612:  /* *fistdi2_1 */
    case 611:  /* rintxf2 */
    case 607:  /* *f2xm1xf2_i387 */
    case 586:  /* *cosxf2_i387 */
    case 583:  /* *sinxf2_i387 */
    case 578:  /* *rsqrtsf2_sse */
    case 574:  /* truncxfdf2_i387_noop_unspec */
    case 573:  /* truncxfsf2_i387_noop_unspec */
    case 543:  /* *rcpsf2_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1010:  /* sse2_maskcmpv2df3 */
    case 1009:  /* sse_maskcmpv4sf3 */
    case 1008:  /* sse2_maskcmpdf3 */
    case 1007:  /* sse_maskcmpsf3 */
    case 1006:  /* *avx_maskcmpv4df3 */
    case 1005:  /* *avx_maskcmpv8sf3 */
    case 1004:  /* *avx_maskcmpv2df3 */
    case 1003:  /* *avx_maskcmpv4sf3 */
    case 562:  /* *fop_xf_1_i387 */
    case 561:  /* *fop_xf_comm_i387 */
    case 549:  /* *fop_df_1_i387 */
    case 548:  /* *fop_sf_1_i387 */
    case 547:  /* *fop_df_1_sse */
    case 546:  /* *fop_sf_1_sse */
    case 545:  /* *fop_df_1_avx */
    case 544:  /* *fop_sf_1_avx */
    case 542:  /* *fop_df_1_mixed */
    case 541:  /* *fop_sf_1_mixed */
    case 540:  /* *fop_df_1_mixed_avx */
    case 539:  /* *fop_sf_1_mixed_avx */
    case 538:  /* *fop_df_comm_i387 */
    case 537:  /* *fop_sf_comm_i387 */
    case 536:  /* *fop_df_comm_sse */
    case 535:  /* *fop_sf_comm_sse */
    case 534:  /* *fop_df_comm_avx */
    case 533:  /* *fop_sf_comm_avx */
    case 532:  /* *fop_df_comm_mixed */
    case 531:  /* *fop_sf_comm_mixed */
    case 530:  /* *fop_df_comm_mixed_avx */
    case 529:  /* *fop_sf_comm_mixed_avx */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 528:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 527:  /* *tls_dynamic_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 526:  /* *tls_dynamic_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 525:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 523:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 522:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 521:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 519:  /* *parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 518:  /* paritysi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 517:  /* paritydi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 514:  /* bswaphi_lowpart */
    case 513:  /* *bswaphi_lowpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 516:  /* *bsrhi */
    case 505:  /* bsr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 502:  /* *ffssi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 498:  /* set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 493:  /* return_indirect_internal */
    case 492:  /* return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1508:  /* sse2_clflush */
    case 1505:  /* sse_ldmxcsr */
    case 714:  /* *lwp_llwpcbsi1 */
    case 496:  /* pad */
    case 489:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 1510:  /* *sse2_lfence */
    case 1509:  /* *sse2_mfence */
    case 1507:  /* *sse_sfence */
    case 488:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 701:  /* trap */
    case 652:  /* cld */
    case 500:  /* leave */
    case 499:  /* eh_return_internal */
    case 494:  /* nop */
    case 491:  /* return_internal_long */
    case 490:  /* return_internal */
    case 487:  /* blockage */
      break;

    case 483:  /* *sibcall_pop_1 */
    case 482:  /* *call_pop_1 */
    case 481:  /* *call_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 480:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 479:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 520:  /* *parityqi2_cmp */
    case 478:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 477:  /* *fp_jcc_8si_387 */
    case 476:  /* *fp_jcc_8hi_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 474:  /* *fp_jcc_6_387 */
    case 472:  /* *fp_jcc_4_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 475:  /* *fp_jcc_7_387 */
    case 473:  /* *fp_jcc_5_387 */
    case 471:  /* *fp_jcc_3_387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 470:  /* *jcc_btsi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 469:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 468:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 467:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 466:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 465:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1718:  /* xop_maskcmp_unsv2di3 */
    case 1717:  /* xop_maskcmp_unsv4si3 */
    case 1716:  /* xop_maskcmp_unsv8hi3 */
    case 1715:  /* xop_maskcmp_unsv16qi3 */
    case 1714:  /* xop_maskcmpv2di3 */
    case 1713:  /* xop_maskcmpv4si3 */
    case 1712:  /* xop_maskcmpv8hi3 */
    case 1711:  /* xop_maskcmpv16qi3 */
    case 464:  /* *sse_setccdf */
    case 463:  /* *sse_setccsf */
    case 462:  /* *avx_setccdf */
    case 461:  /* *avx_setccsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 456:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 447:  /* ix86_rotrdi3 */
    case 438:  /* ix86_rotldi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 395:  /* x86_shrd */
    case 382:  /* x86_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 372:  /* copysigntf3_var */
    case 371:  /* copysigndf3_var */
    case 370:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 1768:  /* *avx_vperm2f128v4df_full */
    case 1767:  /* *avx_vperm2f128v8sf_full */
    case 1766:  /* *avx_vperm2f128v8si_full */
    case 1742:  /* pclmulqdq */
    case 1741:  /* *vpclmulqdq */
    case 1726:  /* xop_pcom_tfv2di3 */
    case 1725:  /* xop_pcom_tfv4si3 */
    case 1724:  /* xop_pcom_tfv8hi3 */
    case 1723:  /* xop_pcom_tfv16qi3 */
    case 1681:  /* xop_pperm */
    case 1590:  /* sse4_1_pblendvb */
    case 1589:  /* *avx_pblendvb */
    case 1586:  /* sse4_1_mpsadbw */
    case 1585:  /* *avx_mpsadbw */
    case 1583:  /* sse4_1_dppd */
    case 1582:  /* sse4_1_dpps */
    case 1581:  /* avx_dppd256 */
    case 1580:  /* avx_dpps256 */
    case 1579:  /* avx_dppd */
    case 1578:  /* avx_dpps */
    case 1577:  /* sse4_1_blendvpd */
    case 1576:  /* sse4_1_blendvps */
    case 1573:  /* avx_blendvpd256 */
    case 1572:  /* avx_blendvps256 */
    case 1571:  /* avx_blendvpd */
    case 1570:  /* avx_blendvps */
    case 1562:  /* sse4a_extrqi */
    case 1551:  /* ssse3_palignrdi */
    case 1550:  /* ssse3_palignrti */
    case 1549:  /* *avx_palignrti */
    case 1000:  /* avx_cmppdv4df3 */
    case 999:  /* avx_cmppsv8sf3 */
    case 998:  /* avx_cmppdv2df3 */
    case 997:  /* avx_cmppsv4sf3 */
    case 369:  /* copysigntf3_const */
    case 368:  /* copysigndf3_const */
    case 367:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 354:  /* *absnegtf2_sse */
    case 353:  /* *absnegxf2_i387 */
    case 352:  /* *absnegdf2_i387 */
    case 351:  /* *absnegsf2_i387 */
    case 350:  /* *absnegdf2_sse */
    case 349:  /* *absnegsf2_sse */
    case 348:  /* *absnegdf2_mixed */
    case 347:  /* *absnegsf2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 510:  /* *popcountdi2_cmp */
    case 509:  /* *popcountsi2_cmp */
    case 508:  /* *popcounthi2_cmp */
    case 380:  /* *one_cmpldi2_2 */
    case 379:  /* *one_cmplsi2_2 */
    case 378:  /* *one_cmplhi2_2 */
    case 377:  /* *one_cmplqi2_2 */
    case 346:  /* *negdi2_cmpz */
    case 345:  /* *negsi2_cmpz */
    case 344:  /* *neghi2_cmpz */
    case 343:  /* *negqi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 336:  /* *xorqi_cc_ext_1 */
    case 299:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 321:  /* *xorqi_2_slp */
    case 320:  /* *iorqi_2_slp */
    case 297:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 288:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 287:  /* *testqi_ext_2 */
    case 286:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 285:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 280:  /* *udivmodsi4_noext */
    case 279:  /* *udivmodhi4_noext */
    case 276:  /* *divmodsi4_noext */
    case 275:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 278:  /* *udivmodsi4 */
    case 277:  /* *udivmodhi4 */
    case 274:  /* *divmodsi4 */
    case 273:  /* *divmodhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 270:  /* *umulsi3_highpart_1 */
    case 269:  /* *smulsi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 268:  /* *umulqihi3_1 */
    case 267:  /* *mulqihi3_1 */
    case 266:  /* *umulsidi3_1 */
    case 265:  /* *mulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 261:  /* *subdi3_cc_overflow */
    case 260:  /* *adddi3_cc_overflow */
    case 259:  /* *subsi3_cc_overflow */
    case 258:  /* *addsi3_cc_overflow */
    case 257:  /* *subhi3_cc_overflow */
    case 256:  /* *addhi3_cc_overflow */
    case 255:  /* *subqi3_cc_overflow */
    case 254:  /* *addqi3_cc_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 253:  /* *subsi3_cconly_overflow */
    case 252:  /* *subhi3_cconly_overflow */
    case 251:  /* *subqi3_cconly_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 250:  /* *adddi3_cconly_overflow */
    case 249:  /* *addsi3_cconly_overflow */
    case 248:  /* *addhi3_cconly_overflow */
    case 247:  /* *addqi3_cconly_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 246:  /* *subdi3_carry */
    case 245:  /* *adddi3_carry */
    case 244:  /* *subsi3_carry */
    case 243:  /* *addsi3_carry */
    case 242:  /* *subhi3_carry */
    case 241:  /* *addhi3_carry */
    case 240:  /* *subqi3_carry */
    case 239:  /* *addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 238:  /* *subdi_3 */
    case 237:  /* *subsi_3 */
    case 236:  /* *subhi_3 */
    case 235:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 223:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1643:  /* xop_pmacssdd */
    case 1642:  /* xop_pmacsdd */
    case 1641:  /* xop_pmacssww */
    case 1640:  /* xop_pmacsww */
    case 1074:  /* fma4_fmsubv2df4 */
    case 1073:  /* fma4_fmsubv4sf4 */
    case 1072:  /* fma4_fmsubdf4 */
    case 1071:  /* fma4_fmsubsf4 */
    case 1068:  /* fma4_fmaddv2df4 */
    case 1067:  /* fma4_fmaddv4sf4 */
    case 1066:  /* fma4_fmadddf4 */
    case 1065:  /* fma4_fmaddsf4 */
    case 1060:  /* fma4_fmsubv4df4256 */
    case 1059:  /* fma4_fmsubv8sf4256 */
    case 1058:  /* fma4_fmaddv4df4256 */
    case 1057:  /* fma4_fmaddv8sf4256 */
    case 222:  /* *lea_general_2 */
    case 221:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 335:  /* *xorqi_ext_2 */
    case 334:  /* *iorqi_ext_2 */
    case 333:  /* *xorqi_ext_1 */
    case 332:  /* *iorqi_ext_1 */
    case 301:  /* *andqi_ext_2 */
    case 300:  /* *andqi_ext_1 */
    case 220:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 331:  /* *xorqi_ext_0 */
    case 330:  /* *iorqi_ext_0 */
    case 298:  /* andqi_ext_0 */
    case 219:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 437:  /* *lshrqi2_cconly */
    case 435:  /* *lshrqi2_one_bit_cconly */
    case 429:  /* *lshrhi3_cconly */
    case 427:  /* *lshrhi3_one_bit_cconly */
    case 423:  /* *lshrsi3_cconly */
    case 421:  /* *lshrsi3_one_bit_cconly */
    case 416:  /* *ashrqi3_cconly */
    case 414:  /* *ashrqi3_one_bit_cconly */
    case 408:  /* *ashrhi3_cconly */
    case 406:  /* *ashrhi3_one_bit_cconly */
    case 402:  /* *ashrsi3_cconly */
    case 400:  /* *ashrsi3_one_bit_cconly */
    case 393:  /* *ashlqi3_cconly */
    case 389:  /* *ashlhi3_cconly */
    case 385:  /* *ashlsi3_cconly */
    case 329:  /* *xordi_3 */
    case 328:  /* *iordi_3 */
    case 327:  /* *xorsi_3 */
    case 326:  /* *iorsi_3 */
    case 325:  /* *xorhi_3 */
    case 324:  /* *iorhi_3 */
    case 323:  /* *xorqi_3 */
    case 322:  /* *iorqi_3 */
    case 218:  /* *addqi_5 */
    case 217:  /* *addhi_5 */
    case 216:  /* *adddi_5 */
    case 215:  /* *addsi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 211:  /* *addqi_3 */
    case 210:  /* *addhi_3 */
    case 209:  /* *adddi_3 */
    case 208:  /* *addsi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 436:  /* *lshrqi2_cmp */
    case 434:  /* *lshrqi2_one_bit_cmp */
    case 428:  /* *lshrhi3_cmp */
    case 426:  /* *lshrhi3_one_bit_cmp */
    case 422:  /* *lshrsi3_cmp */
    case 420:  /* *lshrsi3_one_bit_cmp */
    case 415:  /* *ashrqi3_cmp */
    case 413:  /* *ashrqi3_one_bit_cmp */
    case 407:  /* *ashrhi3_cmp */
    case 405:  /* *ashrhi3_one_bit_cmp */
    case 401:  /* *ashrsi3_cmp */
    case 399:  /* *ashrsi3_one_bit_cmp */
    case 392:  /* *ashlqi3_cmp */
    case 388:  /* *ashlhi3_cmp */
    case 384:  /* *ashlsi3_cmp */
    case 319:  /* *xordi_2 */
    case 318:  /* *iordi_2 */
    case 317:  /* *xorsi_2 */
    case 316:  /* *iorsi_2 */
    case 315:  /* *xorhi_2 */
    case 314:  /* *iorhi_2 */
    case 313:  /* *xorqi_2 */
    case 312:  /* *iorqi_2 */
    case 296:  /* *andsi_2 */
    case 295:  /* *andhi_2 */
    case 294:  /* *andqi_2 */
    case 293:  /* *andqi_2_maybe_si */
    case 234:  /* *subdi_2 */
    case 233:  /* *subsi_2 */
    case 232:  /* *subhi_2 */
    case 231:  /* *subqi_2 */
    case 207:  /* *addqi_2 */
    case 206:  /* *addhi_2 */
    case 205:  /* *adddi_2 */
    case 204:  /* *addsi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 455:  /* *rotrqi3_1_slp */
    case 453:  /* *rotrqi3_1_one_bit_slp */
    case 445:  /* *rotlqi3_1_slp */
    case 443:  /* *rotlqi3_1_one_bit_slp */
    case 433:  /* *lshrqi3_1_slp */
    case 431:  /* *lshrqi3_1_one_bit_slp */
    case 412:  /* *ashrqi3_1_slp */
    case 410:  /* *ashrqi3_1_one_bit_slp */
    case 311:  /* *xorqi_1_slp */
    case 310:  /* *iorqi_1_slp */
    case 292:  /* *andqi_1_slp */
    case 230:  /* *subqi_1_slp */
    case 203:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 195:  /* addqi3_cc */
    case 194:  /* *adddi3_cc */
    case 193:  /* *addsi3_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 693:  /* pro_epilogue_adjust_stack_1 */
    case 454:  /* *rotrqi3_1 */
    case 452:  /* *rotrqi3_1_one_bit */
    case 451:  /* *rotrhi3_1 */
    case 450:  /* *rotrhi3_one_bit */
    case 449:  /* *rotrsi3_1 */
    case 448:  /* *rotrsi3_1_one_bit */
    case 446:  /* *rotlqi3_1 */
    case 444:  /* *rotlqi3_1_one_bit */
    case 442:  /* *rotlhi3_1 */
    case 441:  /* *rotlhi3_1_one_bit */
    case 440:  /* *rotlsi3_1 */
    case 439:  /* *rotlsi3_1_one_bit */
    case 432:  /* *lshrqi3_1 */
    case 430:  /* *lshrqi3_1_one_bit */
    case 425:  /* *lshrhi3_1 */
    case 424:  /* *lshrhi3_1_one_bit */
    case 419:  /* *lshrsi3_1 */
    case 418:  /* *lshrsi3_1_one_bit */
    case 417:  /* *lshrdi3_1 */
    case 411:  /* *ashrqi3_1 */
    case 409:  /* *ashrqi3_1_one_bit */
    case 404:  /* *ashrhi3_1 */
    case 403:  /* *ashrhi3_1_one_bit */
    case 398:  /* *ashrsi3_1 */
    case 397:  /* *ashrsi3_1_one_bit */
    case 396:  /* *ashrsi3_31 */
    case 394:  /* *ashrdi3_1 */
    case 391:  /* *ashlqi3_1 */
    case 390:  /* *ashlqi3_1_lea */
    case 387:  /* *ashlhi3_1 */
    case 386:  /* *ashlhi3_1_lea */
    case 383:  /* *ashlsi3_1 */
    case 381:  /* *ashldi3_1 */
    case 309:  /* *xorqi_1 */
    case 308:  /* *iorqi_1 */
    case 307:  /* *xordi_1 */
    case 306:  /* *iordi_1 */
    case 305:  /* *xorsi_1 */
    case 304:  /* *iorsi_1 */
    case 303:  /* *xorhi_1 */
    case 302:  /* *iorhi_1 */
    case 291:  /* *andqi_1 */
    case 290:  /* *andhi_1 */
    case 289:  /* *andsi_1 */
    case 272:  /* udivqi3 */
    case 271:  /* divqi3 */
    case 264:  /* *mulqi3_1 */
    case 263:  /* *mulhi3_1 */
    case 262:  /* *mulsi3_1 */
    case 229:  /* *subdi_1 */
    case 228:  /* *subsi_1 */
    case 227:  /* *subhi_1 */
    case 226:  /* *subqi_1 */
    case 225:  /* *subti3_doubleword */
    case 224:  /* *subdi3_doubleword */
    case 202:  /* *addqi_1_lea */
    case 201:  /* *addqi_1 */
    case 200:  /* *addhi_1_lea */
    case 199:  /* *addhi_1 */
    case 198:  /* *adddi_1 */
    case 197:  /* *addsi_1 */
    case 192:  /* *addti3_doubleword */
    case 191:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 187:  /* floatdixf2_i387_with_xmm */
    case 186:  /* floatdidf2_i387_with_xmm */
    case 185:  /* floatdisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 131:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 135:  /* fix_truncsi_i387_with_temp */
    case 134:  /* fix_trunchi_i387_with_temp */
    case 130:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 190:  /* *floatunssixf2_1 */
    case 189:  /* *floatunssidf2_1 */
    case 188:  /* *floatunssisf2_1 */
    case 133:  /* fix_truncsi_i387 */
    case 132:  /* fix_trunchi_i387 */
    case 126:  /* fix_truncdi_i387_fisttp_with_temp */
    case 125:  /* fix_truncsi_i387_fisttp_with_temp */
    case 124:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 115:  /* *fixuns_truncdf_1 */
    case 114:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 853:  /* movdi_to_sse */
    case 501:  /* *ffs_no_cmove */
    case 178:  /* *floatdixf2_i387_with_temp */
    case 177:  /* *floatsixf2_i387_with_temp */
    case 176:  /* *floatdidf2_i387_with_temp */
    case 175:  /* *floatsidf2_i387_with_temp */
    case 174:  /* *floatdisf2_i387_with_temp */
    case 173:  /* *floatsisf2_i387_with_temp */
    case 168:  /* *floatsidf2_sse_with_temp */
    case 167:  /* *floatsisf2_sse_with_temp */
    case 164:  /* *floatsidf2_vector_sse_with_temp */
    case 163:  /* *floatsisf2_vector_sse_with_temp */
    case 158:  /* *floatsidf2_mixed_with_temp */
    case 157:  /* *floatsisf2_mixed_with_temp */
    case 154:  /* *floatsidf2_vector_mixed_with_temp */
    case 153:  /* *floatsisf2_vector_mixed_with_temp */
    case 143:  /* *floathixf2_i387_with_temp */
    case 142:  /* *floathidf2_i387_with_temp */
    case 141:  /* *floathisf2_i387_with_temp */
    case 123:  /* fix_truncdi_i387_fisttp */
    case 122:  /* fix_truncsi_i387_fisttp */
    case 121:  /* fix_trunchi_i387_fisttp */
    case 109:  /* *truncxfdf2_mixed */
    case 108:  /* *truncxfsf2_mixed */
    case 106:  /* *truncdfsf_i387 */
    case 105:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 93:  /* *extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 667:  /* *x86_movsicc_0_m1_se */
    case 666:  /* *x86_movsicc_0_m1 */
    case 515:  /* clzhi2_abm */
    case 507:  /* popcountsi2 */
    case 506:  /* popcounthi2 */
    case 504:  /* clzsi2_abm */
    case 503:  /* ctzsi2 */
    case 342:  /* *negdi2_1 */
    case 341:  /* *negsi2_1 */
    case 340:  /* *neghi2_1 */
    case 339:  /* *negqi2_1 */
    case 338:  /* *negti2_doubleword */
    case 337:  /* *negdi2_doubleword */
    case 129:  /* *fix_truncdi_i387_1 */
    case 128:  /* *fix_truncsi_i387_1 */
    case 127:  /* *fix_trunchi_i387_1 */
    case 92:  /* zero_extendsidi2_32 */
    case 90:  /* *zero_extendqisi2_movzbl_and */
    case 89:  /* *zero_extendqisi2_and */
    case 87:  /* *zero_extendqihi2_movzbw_and */
    case 86:  /* *zero_extendqihi2_and */
    case 84:  /* zero_extendhisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 64:  /* *movqi_insv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1616:  /* sse4_1_zero_extendv2siv2di2 */
    case 1614:  /* sse4_1_zero_extendv2hiv2di2 */
    case 1612:  /* sse4_1_zero_extendv4hiv4si2 */
    case 1610:  /* sse4_1_zero_extendv2qiv2di2 */
    case 1608:  /* sse4_1_zero_extendv4qiv4si2 */
    case 1606:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 1604:  /* sse4_1_extendv2siv2di2 */
    case 1602:  /* sse4_1_extendv2hiv2di2 */
    case 1600:  /* sse4_1_extendv4hiv4si2 */
    case 1598:  /* sse4_1_extendv2qiv2di2 */
    case 1596:  /* sse4_1_extendv4qiv4si2 */
    case 1594:  /* sse4_1_extendv8qiv8hi2 */
    case 1167:  /* sse2_cvtps2pd */
    case 1155:  /* sse2_cvtdq2pd */
    case 1153:  /* sse2_cvttsd2si */
    case 1136:  /* sse_cvttss2si */
    case 1131:  /* sse_cvttps2pi */
    case 858:  /* sse2_movq128 */
    case 821:  /* *vec_dupv4hi */
    case 577:  /* sqrt_extenddfxf2_i387 */
    case 576:  /* sqrt_extendsfxf2_i387 */
    case 366:  /* *negextenddfxf2 */
    case 365:  /* *absextenddfxf2 */
    case 364:  /* *negextendsfxf2 */
    case 363:  /* *absextendsfxf2 */
    case 362:  /* *negextendsfdf2 */
    case 361:  /* *absextendsfdf2 */
    case 62:  /* *movqi_extzv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1748:  /* vec_dupv4df */
    case 1747:  /* vec_dupv4di */
    case 1746:  /* vec_dupv8sf */
    case 1745:  /* vec_dupv8si */
    case 1557:  /* absv2si2 */
    case 1556:  /* absv4hi2 */
    case 1555:  /* absv8qi2 */
    case 1554:  /* absv4si2 */
    case 1553:  /* absv8hi2 */
    case 1552:  /* absv16qi2 */
    case 1484:  /* *vec_dupv2di */
    case 1483:  /* *vec_dupv2di_sse3 */
    case 1482:  /* *vec_dupv2di_avx */
    case 1481:  /* *vec_dupv4si */
    case 1480:  /* *vec_dupv4si_avx */
    case 1479:  /* *vec_extractv2di_1_sse */
    case 1478:  /* *vec_extractv2di_1_sse2 */
    case 1477:  /* *vec_extractv2di_1_avx */
    case 1476:  /* *sse2_storeq */
    case 1474:  /* sse2_stored */
    case 1259:  /* vec_dupv2df */
    case 1258:  /* *vec_dupv2df_sse3 */
    case 1255:  /* *vec_extractv2df_0_sse */
    case 1254:  /* *vec_extractv2df_1_sse */
    case 1249:  /* sse2_storelpd */
    case 1248:  /* sse2_storehpd */
    case 1247:  /* *avx_storehpd */
    case 1227:  /* vec_extract_hi_v32qi */
    case 1226:  /* vec_extract_lo_v32qi */
    case 1225:  /* vec_extract_hi_v16hi */
    case 1224:  /* vec_extract_lo_v16hi */
    case 1223:  /* vec_extract_hi_v8sf */
    case 1222:  /* vec_extract_hi_v8si */
    case 1221:  /* vec_extract_lo_v8sf */
    case 1220:  /* vec_extract_lo_v8si */
    case 1219:  /* vec_extract_hi_v4df */
    case 1218:  /* vec_extract_hi_v4di */
    case 1217:  /* vec_extract_lo_v4df */
    case 1216:  /* vec_extract_lo_v4di */
    case 1215:  /* *vec_extractv4sf_0 */
    case 1197:  /* *vec_dupv4sf */
    case 1196:  /* *vec_dupv4sf_avx */
    case 1191:  /* sse_storelps */
    case 1190:  /* *avx_storelps */
    case 1187:  /* sse_storehps */
    case 1166:  /* avx_cvtps2pd256 */
    case 1164:  /* avx_cvtpd2ps256 */
    case 1158:  /* avx_cvttpd2dq256 */
    case 1154:  /* avx_cvtdq2pd256 */
    case 1148:  /* sse2_cvttpd2pi */
    case 1146:  /* sse2_cvtpi2pd */
    case 1145:  /* sse2_cvttps2dq */
    case 1144:  /* avx_cvttps2dq256 */
    case 1143:  /* avx_cvttps2dq */
    case 1139:  /* sse2_cvtdq2ps */
    case 1138:  /* avx_cvtdq2ps256 */
    case 1137:  /* avx_cvtdq2ps */
    case 926:  /* sqrtv2df2 */
    case 925:  /* sqrtv4df2 */
    case 924:  /* sse_sqrtv4sf2 */
    case 923:  /* avx_sqrtv8sf2 */
    case 825:  /* *vec_extractv2si_1 */
    case 824:  /* *vec_extractv2si_0 */
    case 822:  /* *vec_dupv2si */
    case 820:  /* mmx_pswapdv2si2 */
    case 755:  /* *vec_extractv2sf_1 */
    case 754:  /* *vec_extractv2sf_0 */
    case 752:  /* *vec_dupv2sf */
    case 751:  /* mmx_pswapdv2sf2 */
    case 750:  /* mmx_floatv2si2 */
    case 747:  /* mmx_pf2id */
    case 668:  /* *x86_movsicc_0_m1_neg */
    case 580:  /* *sqrtdf2_sse */
    case 579:  /* *sqrtsf2_sse */
    case 575:  /* sqrtxf2 */
    case 512:  /* *bswapsi_1 */
    case 511:  /* *bswapsi_movbe */
    case 376:  /* *one_cmplqi2_1 */
    case 375:  /* *one_cmpldi2_1 */
    case 374:  /* *one_cmplsi2_1 */
    case 373:  /* *one_cmplhi2_1 */
    case 360:  /* *negxf2_1 */
    case 359:  /* *absxf2_1 */
    case 358:  /* *negdf2_1 */
    case 357:  /* *absdf2_1 */
    case 356:  /* *negsf2_1 */
    case 355:  /* *abssf2_1 */
    case 184:  /* *floatdixf2_i387 */
    case 183:  /* *floatsixf2_i387 */
    case 182:  /* *floatdidf2_i387 */
    case 181:  /* *floatsidf2_i387 */
    case 180:  /* *floatdisf2_i387 */
    case 179:  /* *floatsisf2_i387 */
    case 172:  /* *floatsidf2_sse_nointerunit */
    case 171:  /* *floatsisf2_sse_nointerunit */
    case 170:  /* *floatsidf2_sse_interunit */
    case 169:  /* *floatsisf2_sse_interunit */
    case 166:  /* *floatsidf2_vector_sse */
    case 165:  /* *floatsisf2_vector_sse */
    case 162:  /* *floatsidf2_mixed_nointerunit */
    case 161:  /* *floatsisf2_mixed_nointerunit */
    case 160:  /* *floatsidf2_mixed_interunit */
    case 159:  /* *floatsisf2_mixed_interunit */
    case 156:  /* *floatsidf2_vector_mixed */
    case 155:  /* *floatsisf2_vector_mixed */
    case 152:  /* *floatdixf2_1 */
    case 151:  /* *floatsixf2_1 */
    case 150:  /* *floatdidf2_1 */
    case 149:  /* *floatsidf2_1 */
    case 148:  /* *floatdisf2_1 */
    case 147:  /* *floatsisf2_1 */
    case 146:  /* *floathixf2_i387 */
    case 145:  /* *floathidf2_i387 */
    case 144:  /* *floathisf2_i387 */
    case 140:  /* *floathixf2_1 */
    case 139:  /* *floathidf2_1 */
    case 138:  /* *floathisf2_1 */
    case 120:  /* fix_truncdi_fisttp_i387_1 */
    case 119:  /* fix_truncsi_fisttp_i387_1 */
    case 118:  /* fix_trunchi_fisttp_i387_1 */
    case 117:  /* fix_truncdfsi_sse */
    case 116:  /* fix_truncsfsi_sse */
    case 113:  /* *truncxfdf2_i387 */
    case 112:  /* *truncxfsf2_i387 */
    case 111:  /* truncxfdf2_i387_noop */
    case 110:  /* truncxfsf2_i387_noop */
    case 107:  /* *truncdfsf2_i387_1 */
    case 104:  /* *truncdfsf_fast_i387 */
    case 103:  /* *truncdfsf_fast_sse */
    case 102:  /* *truncdfsf_fast_mixed */
    case 101:  /* *extenddfxf2_i387 */
    case 100:  /* *extendsfxf2_i387 */
    case 99:  /* *extendsfdf2_i387 */
    case 98:  /* *extendsfdf2_sse */
    case 97:  /* *extendsfdf2_mixed */
    case 96:  /* extendqisi2 */
    case 95:  /* extendqihi2 */
    case 94:  /* extendhisi2 */
    case 91:  /* *zero_extendqisi2_movzbl */
    case 88:  /* *zero_extendqihi2_movzbl */
    case 85:  /* *zero_extendhisi2_movzwl */
    case 61:  /* *movsi_extzv_1 */
    case 60:  /* *movqi_extv_1 */
    case 59:  /* *movhi_extv_1 */
    case 58:  /* *movsi_extv_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 57:  /* *movstrictqi_xor */
    case 51:  /* *movstricthi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 486:  /* *sibcall_1 */
    case 485:  /* *call_1 */
    case 484:  /* *call_0 */
    case 460:  /* *setcc_qi_slp */
    case 63:  /* movsi_insv_1 */
    case 56:  /* *movstrictqi_1 */
    case 50:  /* *movstricthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 83:  /* swapxf */
    case 76:  /* *swapdf */
    case 71:  /* *swapsf */
    case 55:  /* *swapqi_2 */
    case 54:  /* *swapqi_1 */
    case 49:  /* *swaphi_2 */
    case 48:  /* *swaphi_1 */
    case 45:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 497:  /* set_got */
    case 41:  /* popsi1 */
    case 40:  /* *popsi1_epilogue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 495:  /* vswapmov */
    case 457:  /* *setcc_si_1_and */
    case 43:  /* *movsi_or */
    case 42:  /* *movsi_xor */
    case 39:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 852:  /* *movv2df_internal */
    case 851:  /* *movv4sf_internal */
    case 850:  /* *movv1ti_internal */
    case 849:  /* *movv2di_internal */
    case 848:  /* *movv4si_internal */
    case 847:  /* *movv8hi_internal */
    case 846:  /* *movv16qi_internal */
    case 845:  /* *avx_movv4df_internal */
    case 844:  /* *avx_movv8sf_internal */
    case 843:  /* *avx_movv4di_internal */
    case 842:  /* *avx_movv8si_internal */
    case 841:  /* *avx_movv16hi_internal */
    case 840:  /* *avx_movv32qi_internal */
    case 839:  /* *avx_movv2df_internal */
    case 838:  /* *avx_movv4sf_internal */
    case 837:  /* *avx_movv1ti_internal */
    case 836:  /* *avx_movv2di_internal */
    case 835:  /* *avx_movv4si_internal */
    case 834:  /* *avx_movv8hi_internal */
    case 833:  /* *avx_movv16qi_internal */
    case 727:  /* *movv2sf_internal */
    case 726:  /* *movv2sf_internal_avx */
    case 725:  /* *movv1di_internal */
    case 724:  /* *movv2si_internal */
    case 723:  /* *movv4hi_internal */
    case 722:  /* *movv8qi_internal */
    case 721:  /* *movv1di_internal_avx */
    case 720:  /* *movv2si_internal_avx */
    case 719:  /* *movv4hi_internal_avx */
    case 718:  /* *movv8qi_internal_avx */
    case 703:  /* *prefetch_3dnow */
    case 459:  /* *setcc_qi */
    case 458:  /* *setcc_si_1_movzbl */
    case 196:  /* *lea_1 */
    case 82:  /* *pushtf_sse */
    case 81:  /* *movtf_internal */
    case 80:  /* *movxf_integer */
    case 79:  /* *movxf_nointeger */
    case 78:  /* *pushxf_integer */
    case 77:  /* *pushxf_nointeger */
    case 75:  /* *movdf_integer */
    case 74:  /* *movdf_nointeger */
    case 73:  /* *pushdf_integer */
    case 72:  /* *pushdf_nointeger */
    case 70:  /* *movsf_1 */
    case 69:  /* *pushsf */
    case 68:  /* *movti_internal */
    case 67:  /* *movoi_internal */
    case 66:  /* *movdi_2 */
    case 65:  /* *pushdi */
    case 53:  /* *movqi_1 */
    case 52:  /* *pushqi2 */
    case 47:  /* *movhi_1 */
    case 46:  /* *pushhi2 */
    case 44:  /* *movsi_1 */
    case 38:  /* *pushsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 137:  /* x86_fldcw_1 */
    case 31:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1506:  /* sse_stmxcsr */
    case 715:  /* lwp_slwpcbsi */
    case 712:  /* *rdtsc */
    case 524:  /* *load_tp_si */
    case 136:  /* x86_fnstcw_1 */
    case 30:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 29:  /* *cmpfp_si_cc */
    case 28:  /* *cmpfp_hi_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 27:  /* *cmpfp_si */
    case 26:  /* *cmpfp_hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 214:  /* *addqi_4 */
    case 213:  /* *addhi_4 */
    case 212:  /* *addsi_4 */
    case 25:  /* *cmpfp_u_cc */
    case 23:  /* *cmpfp_df_cc */
    case 22:  /* *cmpfp_sf_cc */
    case 19:  /* *cmpfp_xf_cc */
    case 17:  /* *cmpfp_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 24:  /* *cmpfp_u */
    case 21:  /* *cmpfp_df */
    case 20:  /* *cmpfp_sf */
    case 18:  /* *cmpfp_xf */
    case 16:  /* *cmpfp_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 15:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 14:  /* *cmpqi_ext_3_insn */
    case 13:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 12:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 284:  /* *testsi_1 */
    case 283:  /* *testhi_1 */
    case 282:  /* *testqi_1 */
    case 281:  /* *testqi_1_maybe_si */
    case 11:  /* *cmpdi_minus_1 */
    case 10:  /* *cmpsi_minus_1 */
    case 9:  /* *cmphi_minus_1 */
    case 8:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 37:  /* *cmpfp_iu_387 */
    case 36:  /* *cmpfp_iu_sse */
    case 35:  /* *cmpfp_iu_mixed */
    case 34:  /* *cmpfp_i_i387 */
    case 33:  /* *cmpfp_i_sse */
    case 32:  /* *cmpfp_i_mixed */
    case 7:  /* *cmpdi_1 */
    case 6:  /* *cmpsi_1 */
    case 5:  /* *cmphi_1 */
    case 4:  /* *cmpqi_1 */
    case 3:  /* *cmpdi_ccno_1 */
    case 2:  /* *cmpsi_ccno_1 */
    case 1:  /* *cmphi_ccno_1 */
    case 0:  /* *cmpqi_ccno_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}

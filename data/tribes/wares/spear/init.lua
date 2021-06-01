push_textdomain("tribes")

dirname = path.dirname(__file__)

descriptions:new_ware_type {
   name = "spear",
   -- TRANSLATORS: This is a ware name used in lists of wares
   descname = pgettext("ware", "Spear"),
   icon = dirname .. "menu.png",

   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 7, 10 },
      },
   }
}

pop_textdomain()

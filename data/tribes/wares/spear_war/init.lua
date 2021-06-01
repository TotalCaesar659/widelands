push_textdomain("tribes")

dirname = path.dirname(__file__)

descriptions:new_ware_type {
   name = "spear_war",
   -- TRANSLATORS: This is a ware name used in lists of wares
   descname = pgettext("ware", "War Spear"),
   icon = dirname .. "menu.png",

   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 4, 3 },
      },
   }
}

pop_textdomain()
